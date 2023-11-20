__int64 __fastcall gun_mechanism_s2(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rbx
  int v8; // r8d
  _QWORD *v9; // rax
  __int64 Unit; // rax
  unsigned int v11; // eax
  int v12; // ecx
  char v13; // al
  bool v14; // cl
  int v15; // xmm0_4
  int v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]

  result = *(a2 + 0x1E);
  if ( (*(a2 + 0x1E) & 0x84) == 0x80 )
  {
    *(a1 + 0x505) = result & 1;
    v5 = *(a2 + 0x1F);
    *(a1 + 0x43C) = v5;
    v6 = **(*(a1 + 0x2B0) + (v5 << 6) + 0x98);
    if ( v6 )
    {
      v7 = j__malloc_base(0x10ui64);
      if ( !v7 )
      {
        do
        {
          if ( !off_4B678A0 || !off_4B678A0(0x10i64) )
          {
            v17 = 0x10i64;
            v16 = 2;
            LOBYTE(v8) = 1;
            log_err(
              "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
              0x345,
              v8,
              "Not enough memory to alloc %llu bytes",
              &v16,
              1);
          }
          v9 = j__malloc_base(0x10ui64);
        }
        while ( !v9 );
        v7 = v9;
      }
      _InterlockedAdd(&dword_4B6788C, (j__msize(v7) + 0xF) >> 4);
      _InterlockedIncrement(&dword_4B67890);
      *v7 = &off_44A9350;
      v7[1] = v6;
      add_delayed_callback(&qword_4B71860, v7, 0i64, 0i64, "DelayedAction @\n\t..\\..\\skyquake\\prog\\weapon\\gun.cpp(457):");
    }
    Unit = *(a1 + 8);
    if ( Unit && (v11 = *(Unit + 0x10B0), v11 <= 0xF) && (v12 = 0x897E, _bittest(&v12, v11)) )
      *(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0xBC) = *(a2 + 0x10);
    else
      *(a1 + 0x1F4) = *(a2 + 0x10);
    *(*(a1 + 0x2B0) + (*(a1 + 0x43C) << 6) + 0xC0) = *(a2 + 0x14);
    v13 = *(a1 + 0x3A2);
    v14 = (*(a2 + 0x1E) & 0x20) != 0;
    *(a1 + 0x3A2) = v14;
    *(a1 + 0x1F7) = (*(a2 + 0x1E) & 0x40) != 0;
    if ( *(a1 + 0x505) )
    {
      *(a1 + 0x3A2) = 0;
      *(a1 + 0x440) = 1;
      v14 = 0;
    }
    if ( v13 && !v14 )
      *(a1 + 0x440) = 1;
    *(a1 + 0x4C8) = *a2;
    *(a1 + 0x444) = *(a2 + 4);
    *(a1 + 0x378) = *(a2 + 8);
    *(a1 + 0x3A0) = *(a2 + 0x1C);
    *(a1 + 0x218) = *(a2 + 0x18);
    *(a1 + 0x520) = *(a2 + 0xC);
    result = *(a2 + 0x20);
    *(a1 + 0x213) = result;
    if ( *(a1 + 0x2B0) )
    {
      v15 = *(a2 + 0x24);
      if ( COERCE_FLOAT(xmmword_449AF40 & v15) > *&dword_44A05D0
        && COERCE_FLOAT(xmmword_449AF40 & v15) > (COERCE_FLOAT(xmmword_449AF40 & v15) * *&dword_44A0308) )
      {
        *(a1 + 0x368) = v15;
      }
    }
  }
  return result;
}
