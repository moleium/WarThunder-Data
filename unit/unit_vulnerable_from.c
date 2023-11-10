char __fastcall unit_vulnerable_from(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r13
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  const char *v9; // rdi
  const char **v10; // rbx
  __int64 v11; // rsi
  char (__stdcall *v12)(); // rsi
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  __int64 v16; // rax
  int v17; // r15d
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  const char *v27; // rdi
  const char **v28; // rbx
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(); // rsi
  __int64 v31; // rdi
  unsigned int v32; // ebx
  unsigned int v33; // r15d
  __int64 v34; // rax
  int v35; // ebp
  int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // eax
  unsigned __int64 v42; // rbp
  __int64 Unit; // rdi
  const char *v45; // [rsp+38h] [rbp-80h] BYREF
  __int64 v46; // [rsp+40h] [rbp-78h]
  __int64 v47; // [rsp+48h] [rbp-70h]
  __int64 UnitList; // [rsp+50h] [rbp-68h] BYREF
  __int64 v49; // [rsp+58h] [rbp-60h]
  __int64 v50; // [rsp+60h] [rbp-58h]
  const char *v51; // [rsp+68h] [rbp-50h] BYREF
  __int64 *v52; // [rsp+70h] [rbp-48h]

  v4 = a2;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  v7 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  UnitList = 0i64;
  v49 = v7;
  v50 = 0i64;
  v45 = "isAlive";
  v8 = sub_1459B30(v4, "target_type", &v45);
  if ( v8 )
  {
    v9 = v8;
    v10 = &off_44CF850;
    v11 = 0i64;
    while ( strcmp(*v10, v9) )
    {
      ++v11;
      ++v10;
      if ( v11 == 0x31 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    LODWORD(v11) = 0;
  }
  v12 = funcs_7FF717B84E97[v11];
  v13 = *v4;
  v14 = 0xFFFFFFFF;
  if ( *v4 )
  {
    v15 = sub_1285C0("target", 6ui64);
    v16 = *(v13 + 0x50);
    v52 = v4;
    if ( v16 )
    {
      v17 = *(v16 + 0x20);
      if ( !*(v13 + 0x20) )
      {
LABEL_15:
        v4 = v52;
        if ( v17 )
          v14 = sub_128A70(*(v13 + 0x50), "target", 6ui64, v15);
        goto LABEL_17;
      }
    }
    else
    {
      v17 = 0;
      if ( !*(v13 + 0x20) )
        goto LABEL_15;
    }
    v18 = sub_128A70(v13, "target", 6ui64, v15);
    if ( v18 >= 0 )
    {
      v14 = v17 + v18;
      v4 = v52;
      goto LABEL_17;
    }
    goto LABEL_15;
  }
LABEL_17:
  sub_CD2950(&UnitList, v4, v14, a1, v12, 0i64);
  if ( v50 )
  {
    v19 = 0;
    do
    {
      if ( v12() )
      {
        v20 = v50;
      }
      else
      {
        v20 = v50 - 1;
        if ( v50 - 1 > v19 )
        {
          memmove((UnitList + 8i64 * v19), (UnitList + 8i64 * v19 + 8), 8i64 * v50 - (8i64 * v19 + 8));
          v20 = v50 - 1;
        }
        --v19;
        LODWORD(v50) = v20;
      }
      ++v19;
    }
    while ( v19 < v20 );
  }
  sub_CD4300(&UnitList, a1, v4, "target");
  if ( v50 )
  {
    v24 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v24[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v24, v21, v22, v23);
    v25 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
    v45 = 0i64;
    v46 = v25;
    v47 = 0i64;
    v51 = "isAlive";
    v26 = sub_1459B30(v4, "player_type", &v51);
    if ( v26 )
    {
      v27 = v26;
      v28 = &off_44CF850;
      v29 = 0i64;
      while ( strcmp(*v28, v27) )
      {
        ++v29;
        ++v28;
        if ( v29 == 0x31 )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      v29 = 0i64;
    }
    v30 = funcs_7FF717B84E97[v29];
    v31 = *v4;
    v32 = 0xFFFFFFFF;
    if ( !*v4 )
      goto LABEL_43;
    v33 = sub_1285C0("player", 6ui64);
    v34 = *(v31 + 0x50);
    if ( v34 )
    {
      v35 = *(v34 + 0x20);
      if ( !*(v31 + 0x20) )
        goto LABEL_40;
    }
    else
    {
      v35 = 0;
      if ( !*(v31 + 0x20) )
        goto LABEL_40;
    }
    v36 = sub_128A70(v31, "player", 6ui64, v33);
    if ( v36 >= 0 )
    {
      v37 = v35 + v36;
      goto LABEL_42;
    }
LABEL_40:
    if ( !v35 )
    {
LABEL_43:
      sub_CD2950(&v45, v4, v32, a1, v30, 0i64);
      if ( v47 )
      {
        v38 = 0;
        do
        {
          if ( (v30)(*&v45[8 * v38]) )
          {
            v39 = v47;
          }
          else
          {
            v39 = v47 - 1;
            if ( v47 - 1 > v38 )
            {
              memmove(&v45[8 * v38], &v45[8 * v38 + 8], 8i64 * v47 - (8i64 * v38 + 8));
              v39 = v47 - 1;
            }
            --v38;
            LODWORD(v47) = v39;
          }
          ++v38;
        }
        while ( v38 < v39 );
      }
      sub_CD4300(&v45, a1, v4, "player");
      if ( v47 )
        v40 = *(*v45 + 8i64);
      else
        v40 = 0xFFFFFFFF;
      v41 = v50;
      if ( v50 )
      {
        v42 = 0i64;
        do
        {
          Unit = *(UnitList + 8 * v42);
          LODWORD(v51) = v40;
          if ( *(Unit + 0x1020) != v40 )
          {
            sub_158CE00(Unit + 0x1000, Unit, &v51);
            *(Unit + 0x1020) = v51;
            v41 = v50;
          }
          ++v42;
        }
        while ( v42 < v41 );
      }
      if ( v45 )
        (*(*v46 + 0x40i64))(v46);
      goto LABEL_61;
    }
    v37 = sub_128A70(*(v31 + 0x50), "player", 6ui64, v33);
LABEL_42:
    v32 = v37;
    goto LABEL_43;
  }
LABEL_61:
  if ( UnitList )
    (*(*v49 + 0x40i64))(v49);
  return 1;
}
