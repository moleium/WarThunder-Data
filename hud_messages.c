__int64 __fastcall hud_messages(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  int v8; // eax
  const char *v9; // r13
  const char *v10; // r12
  _QWORD *ThreadLocalStoragePointer; // rcx
  char *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // rbp
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  int v22; // r8d
  _QWORD *v23; // rax
  const char *v24; // rdi
  const char *v25; // rbp
  void *v26; // rdi
  const char *v27; // r15
  int v28; // eax
  unsigned int v29; // r12d
  void *v30; // rcx
  __int64 v31; // rsi
  int v32; // eax
  unsigned int v33; // ebp
  void *v34; // rcx
  __int64 v35; // rsi
  int v36; // eax
  unsigned int v37; // ebp
  void *v38; // rcx
  __int64 v39; // rsi
  int v40; // eax
  unsigned int v41; // ebp
  void *v42; // rcx
  __int64 v43; // rsi
  __int64 result; // rax
  int v45; // [rsp+3Ch] [rbp-6Ch]
  const char *Src; // [rsp+40h] [rbp-68h]
  __int64 v47; // [rsp+48h] [rbp-60h]
  int v48; // [rsp+50h] [rbp-58h] BYREF
  __int64 v49; // [rsp+58h] [rbp-50h]

  if ( qword_4B44C68 )
    sub_FE4450();
  sub_B27BC0(a1 + 0x5A8, "HudMessageHide", &qword_4B67850);
  sub_B27BC0(a1 + 0x5A8, "WatchedHeroChanged", &qword_4B67850);
  sub_C414B0(0i64, 0i64, 0i64);
  *(a1 + 0xEC0) = *(a1 + 0xEB8);
  if ( !a2 )
  {
    v7 = LocalUnit;
    if ( LocalUnit )
      goto LABEL_5;
LABEL_11:
    v9 = &szFile;
    v10 = &szFile;
    goto LABEL_23;
  }
  v7 = *&qword_4AE58C0;
  if ( !*&qword_4AE58C0 )
    goto LABEL_11;
LABEL_5:
  v8 = *(v7 + 0x10B0);
  if ( v8 == 3 )
  {
    v9 = "tank";
  }
  else if ( v8 == 5 )
  {
    v9 = "ship";
    if ( (*(*v7 + 0x118i64))(v7) )
      v9 = "shipEx";
  }
  else if ( (*(v7 + 0x1083) & 8) != 0 )
  {
    v9 = "helicopter";
  }
  else if ( *(v7 + 0x10B0) )
  {
    if ( v8 == 0xB )
    {
      v9 = "walker";
    }
    else
    {
      v9 = &szFile;
      if ( v8 == 0xF )
        v9 = "human";
    }
  }
  else
  {
    v9 = "aircraft";
  }
  v10 = &szFile;
  if ( *(*(v7 + 0x1120) + 0x10i64) )
    v10 = *(*(v7 + 0x1120) + 0x10i64);
LABEL_23:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v4, v5, v6);
  v12 = qword_4B173B8 + 0x230;
  if ( *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
  {
    sub_B36480(v12, v9, v5, v6);
    sub_B36480(qword_4B173B8 + 0x5A90, v10, v13, v14);
  }
  else
  {
    v47 = v7;
    v15 = (*(*v12 + 8i64))(v12);
    v16 = *v15;
    v17 = *(v15 + 8);
    v18 = (*(*(qword_4B173B8 + 0xB52) + 8i64))(qword_4B173B8 + 0x5A90);
    v19 = *v18;
    v20 = *(v18 + 8);
    v21 = j__malloc_base(0x68ui64);
    if ( !v21 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x68i64) )
        {
          v49 = 0x68i64;
          v48 = 2;
          LOBYTE(v22) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v22,
            "Not enough memory to alloc %llu bytes",
            &v48,
            1);
        }
        v23 = j__malloc_base(0x68ui64);
      }
      while ( !v23 );
      v21 = v23;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v21) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    v24 = (v20 + 0x38);
    if ( v19 != 0x18000010 )
      v24 = 0i64;
    Src = v24;
    v25 = (v17 + 0x38);
    *v21 = &off_44CC120;
    v26 = off_4B678C8;
    v21[1] = 0i64;
    v21[2] = v26;
    v21[3] = 0i64;
    if ( v16 != 0x18000010 )
      v25 = 0i64;
    v45 = v19;
    if ( v16 == 0x18000010 && *v25 )
    {
      v27 = v10;
      v28 = strlen(v25);
      v29 = v28 + 1;
      if ( v28 == 0xFFFFFFFF )
      {
        v30 = 0i64;
      }
      else
      {
        v31 = 0x10i64;
        if ( v29 >= 0x11 )
          v31 = v29;
        v30 = (*(*v26 + 0x18i64))(v26, v31);
        v21[1] = v30;
        *(v21 + 7) = v31;
      }
      *(v21 + 6) = v29;
      memmove(v30, v25, v29);
      v26 = off_4B678C8;
      v10 = v27;
      v19 = v45;
    }
    v21[4] = 0i64;
    v21[5] = v26;
    v21[6] = 0i64;
    if ( *v9 )
    {
      v32 = strlen(v9);
      v33 = v32 + 1;
      if ( v32 == 0xFFFFFFFF )
      {
        v34 = 0i64;
      }
      else
      {
        v35 = 0x10i64;
        if ( v33 >= 0x11 )
          v35 = v33;
        v34 = (*(*v26 + 0x18i64))(v26, v35);
        v21[4] = v34;
        *(v21 + 0xD) = v35;
      }
      *(v21 + 0xC) = v33;
      memmove(v34, v9, v33);
      v26 = off_4B678C8;
      v19 = v45;
    }
    v21[7] = 0i64;
    v21[8] = v26;
    v21[9] = 0i64;
    if ( v19 == 0x18000010 && *Src )
    {
      v36 = strlen(Src);
      v37 = v36 + 1;
      if ( v36 == 0xFFFFFFFF )
      {
        v38 = 0i64;
      }
      else
      {
        v39 = 0x10i64;
        if ( v37 >= 0x11 )
          v39 = v37;
        v38 = (*(*v26 + 0x18i64))(v26, v39);
        v21[7] = v38;
        *(v21 + 0x13) = v39;
      }
      *(v21 + 0x12) = v37;
      memmove(v38, Src, v37);
      v26 = off_4B678C8;
    }
    v21[0xA] = 0i64;
    v21[0xB] = v26;
    v21[0xC] = 0i64;
    if ( *v10 )
    {
      v40 = strlen(v10);
      v41 = v40 + 1;
      if ( v40 == 0xFFFFFFFF )
      {
        v42 = 0i64;
      }
      else
      {
        v43 = 0x10i64;
        if ( v41 >= 0x11 )
          v43 = v41;
        v42 = (*(*v26 + 0x18i64))(v26, v43);
        v21[0xA] = v42;
        *(v21 + 0x19) = v43;
      }
      *(v21 + 0x18) = v41;
      memmove(v42, v10, v41);
    }
    sub_1641100(&qword_4B71860, v21, 0, 0, "DelayedAction @\n\t..\\..\\skyquake\\prog\\gui\\hud\\hud.cpp(1644):");
    v7 = v47;
  }
  *(a1 + 0x1C94) = 0;
  result = *(a1 + 0x1C78);
  *(a1 + 0x1C80) = result;
  *(a1 + 0x1C90) = 0xBF800000;
  if ( v7 )
  {
    if ( *(v7 + 0x4E8) )
      return sub_B36A90();
  }
  return result;
}
