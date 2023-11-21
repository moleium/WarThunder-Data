void __fastcall ubknown_autopilot(__int64 game, __int64 a2, int a3)
{
  __int64 Unit; // rdi
  __int64 air_movement; // r14
  int v6; // r12d
  char v7; // al
  __int64 v8; // rcx
  char *v9; // rcx
  bool v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  float v22; // xmm0_4
  __int64 v23; // rdi
  int v24; // xmm0_4
  __m128 v25; // xmm0
  __int64 v26; // rbx
  __m128 v27; // xmm1
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __int64 v30; // rcx
  float *v31; // rbp
  int v32; // [rsp+20h] [rbp-48h] BYREF
  char *v33; // [rsp+28h] [rbp-40h]

  if ( !*(game + 0x330) )
    return;
  Unit = LocalUnit;
  if ( !LocalUnit )
    return;
  if ( *(LocalUnit + 0x10B0) )
    return;
  air_movement = *(LocalUnit + 0x9D0);
  if ( !air_movement || !*(air_movement + 0x4570) )
    return;
  v6 = a2 ? *(game + 0xE0) | a3 : *(game + 0xE0) & ~a3;
  *(game + 0xE0) = v6;
  v7 = *(air_movement + 0x57DC);
  if ( (v6 == 0) == (v7 != 0) )
    return;
  *(air_movement + 0x57E8) = 0;
  *(air_movement + 0x1D84) = 0;
  *(air_movement + 0x5AC8) = 0;
  *(air_movement + 0x57EC) = 0;
  *(air_movement + 0x1D88) = 0;
  *(air_movement + 0x5ACC) = 0;
  *(air_movement + 0x57F0) = 0;
  *(air_movement + 0x1D8C) = 0;
  *(air_movement + 0x5AD0) = 0;
  v8 = *(air_movement + 0x4570);
  if ( v8 )
  {
    if ( v7 == (v6 == 0) )
      goto LABEL_15;
    LOBYTE(a2) = v6 != 0;
    (*(*v8 + 0x20i64))(v8, a2);
  }
  v7 = v6 == 0;
LABEL_15:
  *(air_movement + 0x57DC) = v7;
  v9 = "OFF";
  if ( !v7 )
    v9 = "ON";
  v33 = v9;
  v32 = 1;
  dg_debug(0x20505041u, "Autopilot  %s", &v32, 1);
  if ( *(HudInfo + 0x35) )
  {
    if ( !v6 )
      goto LABEL_44;
  }
  else
  {
    v10 = v6 == 0;
    v11 = *(*(Unit + 0x11D0) + 0x300i64);
    if ( *(v11 + 8) )
    {
      v12 = 0i64;
      do
      {
        v13 = *(*v11 + 8 * v12);
        if ( v13 )
        {
          if ( (*(*v13 + 0x108i64))(v13) )
          {
            v14 = v13[0x56];
            if ( v14 )
              *(v14 + 8) = v10;
          }
        }
        ++v12;
        v11 = *(*(Unit + 0x11D0) + 0x300i64);
      }
      while ( v12 < *(v11 + 8) );
    }
    if ( *(v11 + 0x18) )
    {
      v15 = 0i64;
      do
      {
        v16 = *(*(v11 + 0x10) + 8 * v15);
        if ( v16 )
        {
          if ( (*(*v16 + 0x108i64))(v16) )
          {
            v17 = v16[0x56];
            if ( v17 )
              *(v17 + 8) = v10;
          }
        }
        ++v15;
        v11 = *(*(Unit + 0x11D0) + 0x300i64);
      }
      while ( v15 < *(v11 + 0x18) );
    }
    if ( *(v11 + 0x28) )
    {
      v18 = 0i64;
      do
      {
        v19 = *(*(v11 + 0x20) + 8 * v18);
        if ( v19 )
        {
          if ( (*(*v19 + 0x108i64))(v19) )
          {
            v20 = v19[0x56];
            if ( v20 )
              *(v20 + 8) = v10;
          }
        }
        ++v18;
        v11 = *(*(Unit + 0x11D0) + 0x300i64);
      }
      while ( v18 < *(v11 + 0x28) );
    }
    if ( !v6 )
    {
      if ( *(air_movement + 0x5694) )
      {
        *(air_movement + 0x1D78) = 0i64;
        *(air_movement + 0x12A0) = 0i64;
        *(air_movement + 0x5AB0) = 0i64;
      }
LABEL_44:
      v21 = *(air_movement + 0x1E88);
      if ( !*(air_movement + 0x1E88) )
      {
        *&v24 = 0.0;
LABEL_54:
        *(*(game + 0x440) + 0x814i64) = *&v24;
        dword_4AD2F00 = v24;
        dword_4AD2F0C = v24;
        dword_4AD4590 = v24;
        dword_4AD459C = v24;
        return;
      }
      if ( v21 >= 8 )
      {
        v23 = v21 & 0xFFFFFFF8;
        v25 = 0i64;
        v26 = 0i64;
        v27 = 0i64;
        do
        {
          v25 = _mm_add_ps(
                  v25,
                  _mm_insert_ps(
                    _mm_insert_ps(
                      _mm_insert_ps(*(air_movement + v26 + 0x1E98), *(air_movement + v26 + 0x1ED4), 0x10),
                      *(air_movement + v26 + 0x1F10),
                      0x20),
                    *(air_movement + v26 + 0x1F4C),
                    0x30));
          v27 = _mm_add_ps(
                  v27,
                  _mm_insert_ps(
                    _mm_insert_ps(
                      _mm_insert_ps(*(air_movement + v26 + 0x1F88), *(air_movement + v26 + 0x1FC4), 0x10),
                      *(air_movement + v26 + 0x2000),
                      0x20),
                    *(air_movement + v26 + 0x203C),
                    0x30));
          v26 += 0x1E0i64;
        }
        while ( 0x1E0 * (v21 >> 3) != v26 );
        v28 = _mm_add_ps(v27, v25);
        v29 = _mm_add_ps(_mm_unpackhi_pd(v28, v28), v28);
        v22 = _mm_movehdup_ps(v29).m128_f32[0] + v29.m128_f32[0];
        if ( v23 == v21 )
          goto LABEL_53;
      }
      else
      {
        v22 = 0.0;
        v23 = 0i64;
      }
      v30 = v21 - v23;
      v31 = (air_movement + 0x3C * v23 + 0x1E98);
      do
      {
        v22 = v22 + *v31;
        v31 += 0xF;
        --v30;
      }
      while ( v30 );
LABEL_53:
      *&v24 = v22 / v21;
      goto LABEL_54;
    }
  }
}
