void __fastcall unknown_radio(float a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // r15d
  float v8; // xmm7_4
  __int64 game_; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  float v12; // xmm8_4
  int v13; // r14d
  char v14; // bp
  char v15; // bl
  __int64 v16; // r13
  int v17; // eax
  float v18; // eax
  float v19; // xmm0_4
  char v20; // al
  int v21; // eax
  unsigned __int64 v22; // r13
  float v23; // xmm8_4
  __int64 v24; // r12
  int v25; // eax
  float v26; // eax
  float v27; // xmm0_4
  char v28; // al
  int v29; // eax
  int v30; // edx
  float v31; // xmm0_4
  float v32; // xmm0_4
  __int64 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+38h] [rbp-80h] BYREF

  v2 = dword_4B3FF38;
  if ( !dword_4B3FF38 )
  {
    v3 = sub_1623330(0, 0x20E, 0, "oldradio_update", 0);
    v2 = v3;
    dword_4B3FF38 = v3;
  }
  if ( (dword_4B70D40 & 2) != 0 )
    v4 = sub_1625CD0(v2, &v34);
  else
    v4 = 0i64;
  v33 = v4;
  if ( byte_4B3FBE0 )
  {
    EnterCriticalSection(&stru_4B776C8);
    *&dword_4B3FF34 = *&dword_4B3FF34 - a1;
    if ( *&dword_4B3FF34 > 0.0 )
      goto LABEL_10;
    dword_4B3FF34 = 0x3F800000;
    v5 = LocalUnit;
    if ( !LocalUnit || (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
      goto LABEL_10;
    v6 = LocalUnit + 0x50;
    v7 = (*(*(LocalUnit + 0x50) + 0x30i64))(LocalUnit + 0x50);
    if ( qword_4B1AB10 )
      v8 = *(qword_4B1AB10 + 0x13A8) * *(qword_4B1AB10 + 0x13A8);
    else
      v8 = *&dword_44801E8;
    game_ = game;
    v10 = *(game + 0x450);
    if ( v10 && *(v10 + 0x5CA) )
    {
      if ( !*(v10 + 0x618) )
        goto LABEL_22;
    }
    else if ( !qword_4B507E8 )
    {
LABEL_22:
      if ( *(game + 0x330) )
      {
        v11 = 0i64;
        v12 = *&dword_44D0FE8;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = *(*(game_ + 0x320) + 8 * v11);
          if ( (*(v16 + 0x1058) & 0x7000014) == 0 )
          {
            v17 = (*(*(v16 + 0x50) + 0x30i64))(v16 + 0x50);
            if ( ((dword_4B1C814 & 0x80000) != 0 || v17 != v7 || (dword_4B1C814 & 0x1000000) != 0)
              && *(v16 + 0x10A8) <= 1u )
            {
              if ( (*(v16 + 0x1058) & 0x10000) == 0
                || (*(v16 + 0x1198) & (1 << v7)) == 0
                || (v18 = *(v16 + 0x1170), v18 != 0.0)
                && (((*(v5 + 0x9C8) - *(v16 + 0x9C8)) * (*(v5 + 0x9C8) - *(v16 + 0x9C8)))
                  + ((*(v5 + 0x9C0) - *(v16 + 0x9C0)) * (*(v5 + 0x9C0) - *(v16 + 0x9C0)))) <= v18 )
              {
                v19 = (((*(v16 + 0x9C8) - *(v5 + 0x9C8)) * (*(v16 + 0x9C8) - *(v5 + 0x9C8)))
                     + ((*(v16 + 0x9C4) - *(v5 + 0x9C4)) * (*(v16 + 0x9C4) - *(v5 + 0x9C4))))
                    + ((*(v16 + 0x9C0) - *(v5 + 0x9C0)) * (*(v16 + 0x9C0) - *(v5 + 0x9C0)));
                v13 += v19 < *&dword_4B3FF24;
                v20 = v15;
                if ( v19 < v8 )
                  v15 = 1;
                if ( (v20 & 1) != 0 )
                  v15 = v20;
              }
            }
            if ( (v14 & 1) == 0 )
            {
              v21 = (*(*v6 + 0x30i64))(v5 + 0x50);
              if ( (*(v16 + 0x1058) & (((v21 != 2) << 0xE) | ((v21 != 1) << 0xF))) != 0
                && (*(v16 + 0x1058) & 0x20000) == 0
                && ((((*(v16 + 0x9C8) - *(v5 + 0x9C8)) * (*(v16 + 0x9C8) - *(v5 + 0x9C8)))
                   + ((*(v16 + 0x9C4) - *(v5 + 0x9C4)) * (*(v16 + 0x9C4) - *(v5 + 0x9C4))))
                  + ((*(v16 + 0x9C0) - *(v5 + 0x9C0)) * (*(v16 + 0x9C0) - *(v5 + 0x9C0)))) < v12 )
              {
                v14 = 1;
              }
            }
          }
          ++v11;
          game_ = game;
        }
        while ( v11 < *(game + 0x330) );
      }
      else
      {
        v15 = 0;
        v14 = 0;
        v13 = 0;
      }
      if ( *(game_ + 0x348) )
      {
        v22 = 0i64;
        v23 = *&dword_44D0FE8;
        do
        {
          v24 = *(*(game_ + 0x338) + 8 * v22);
          if ( (*(v24 + 0x1058) & 0x7000014) == 0 )
          {
            v25 = (*(*(v24 + 0x50) + 0x30i64))(v24 + 0x50);
            if ( ((dword_4B1C814 & 0x80000) != 0 || v25 != v7 || (dword_4B1C814 & 0x1000000) != 0)
              && *(v24 + 0x10A8) <= 1u )
            {
              if ( (*(v24 + 0x1058) & 0x10000) == 0
                || (*(v24 + 0x1198) & (1 << v7)) == 0
                || (v26 = *(v24 + 0x1170), v26 != 0.0)
                && (((*(v5 + 0x9C8) - *(v24 + 0x9C8)) * (*(v5 + 0x9C8) - *(v24 + 0x9C8)))
                  + ((*(v5 + 0x9C0) - *(v24 + 0x9C0)) * (*(v5 + 0x9C0) - *(v24 + 0x9C0)))) <= v26 )
              {
                v27 = (((*(v24 + 0x9C8) - *(v5 + 0x9C8)) * (*(v24 + 0x9C8) - *(v5 + 0x9C8)))
                     + ((*(v24 + 0x9C4) - *(v5 + 0x9C4)) * (*(v24 + 0x9C4) - *(v5 + 0x9C4))))
                    + ((*(v24 + 0x9C0) - *(v5 + 0x9C0)) * (*(v24 + 0x9C0) - *(v5 + 0x9C0)));
                v13 += v27 < *&dword_4B3FF28;
                v28 = v15;
                if ( v27 < v8 )
                  v15 = 1;
                if ( (v28 & 1) != 0 )
                  v15 = v28;
              }
            }
            if ( (v14 & 1) == 0 )
            {
              v29 = (*(*v6 + 0x30i64))(v5 + 0x50);
              if ( (*(v24 + 0x1058) & (((v29 != 2) << 0xE) | ((v29 != 1) << 0xF))) != 0
                && (*(v24 + 0x1058) & 0x20000) == 0
                && ((((*(v24 + 0x9C8) - *(v5 + 0x9C8)) * (*(v24 + 0x9C8) - *(v5 + 0x9C8)))
                   + ((*(v24 + 0x9C4) - *(v5 + 0x9C4)) * (*(v24 + 0x9C4) - *(v5 + 0x9C4))))
                  + ((*(v24 + 0x9C0) - *(v5 + 0x9C0)) * (*(v24 + 0x9C0) - *(v5 + 0x9C0)))) < v23 )
              {
                v14 = 1;
              }
            }
          }
          ++v22;
          game_ = game;
        }
        while ( v22 < *(game + 0x348) );
      }
      v30 = 2;
      if ( v13 < dword_4A75078 )
        v30 = v13 >= dword_4A75074;
      dword_4B3FF30 = v30;
      if ( (v15 & 1) != 0 )
      {
        if ( byte_4B3FF2C == 1 && *&dword_4A7507C <= 0.0 )
        {
          sub_F26A10(0x14i64);
          byte_4B3FF2C = 0;
          game_ = game;
          dword_4A7507C = *(game + 0x14C);
        }
      }
      else
      {
        v31 = *&dword_4A7507C;
        if ( *&dword_4A7507C > 0.0 )
        {
          v31 = *&dword_4A7507C - a1;
          *&dword_4A7507C = *&dword_4A7507C - a1;
        }
        if ( v31 <= 0.0 )
          byte_4B3FF2C = 1;
      }
      if ( (v14 & 1) != 0 )
      {
        if ( byte_4B3FF2D == 1 && *&dword_4A75080 <= 0.0 )
        {
          sub_F26A10(0x15i64);
          byte_4B3FF2D = 0;
          game_ = game;
          dword_4A75080 = *(game + 0x14C);
        }
      }
      else
      {
        v32 = *&dword_4A75080;
        if ( *&dword_4A75080 > 0.0 )
        {
          v32 = *&dword_4A75080 - a1;
          *&dword_4A75080 = *&dword_4A75080 - a1;
        }
        if ( v32 <= 0.0 )
          byte_4B3FF2D = 1;
      }
      if ( *&dword_4B1FA20 >= *(game_ + 0x150) )
      {
        if ( !*(v5 + 0x10B0) && !sub_3AF6E0(v5) && !v13 )
          sub_F26AC0();
        dword_4B1FA20 = 0;
      }
    }
LABEL_10:
    LeaveCriticalSection(&stru_4B776C8);
    v4 = v33;
  }
  if ( v4 )
    sub_1625D70(v4, v34);
}
