_QWORD *__fastcall log_weapon(__int64 a1, _QWORD *a2, char a3, unsigned int a4)
{
  if ( !a3 )
    goto LABEL_19;
  game_ = game;
  v8 = *(*(a1 + 8) + 8i64);
  if ( (*(game + 0xCB) & 1) != 0 )
  {
    v9 = 0i64;
  }
  else
  {
    v9 = *(game + 0x620);
    if ( v9 )
      EnterCriticalSection(*(game + 0x620));
  }
  if ( *(game_ + 0x360) <= v8 )                 // Unit Count
  {
    v11 = *(game_ + 0x378);
    if ( *(game_ + 0x378) )
    {
      v12 = *(game_ + 0x368);
      v13 = 0i64;
      while ( 1 )
      {
        currUnit = *(v12 + 8 * v13);
        if ( v8 == (*(currUnit + 8) & 0x7FF) )
          break;
        if ( v11 == ++v13 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      currUnit = 0i64;
    }
  }
  else
  {
    currUnit = *(*(game_ + 0x350) + 8 * v8);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( !currUnit || *(currUnit + 0x10B0) )
  {
    *(a1 + 0x28) = 0i64;
LABEL_19:
    sub_15EAE30(a1, a2, 0i64, a4);
    return a2;
  }
  *(a1 + 0x28) = currUnit;
  if ( !unknown_unit_check(a1) )
    goto LABEL_19;
  v18 = *(*(a1 + 0x28) + 0x11D0i64);
  v19 = "GUNS";
  if ( *(v18 + 0x310) >= 4u )
  {
    v20 = *(*(v18 + 0x300) + 0x38i64);
    if ( v20 > 0 )
    {
      v21 = v20;
      v22 = 0i64;
      v23 = 0;
      do
      {
        v24 = *(*(*(v18 + 0x300) + 0x30i64) + 8 * v22);
        LOBYTE(v15) = 1;
        v23 += (*(*v24 + 0x88i64))(v24, v15);
        ++v22;
      }
      while ( v21 != v22 );
      if ( v23 > 0 && (*(*(a1 + 0x38) + 0x614i64) & 4) != 0 && (!*(a1 + 0x40) || dword_4B1C508 != 1) )
      {
        v19 = "GUNS";
        if ( !*(a1 + 0x4C) )
          v19 = "ROCKETS";
      }
    }
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v15, v16, v17);
  v26 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
  *a2 = 0i64;
  a2[1] = v26;
  a2[2] = 0i64;
  v27 = *(a1 + 0x10);
  v28 = *(a1 + 0x48);
  if ( v27 < 0 )
  {
    v35 = *(a1 + 0x14);
    if ( xmmword_4B69BF0 > v35 )
    {
      v29 = *(qword_4B69BE8 + 4 * v35);
      v30 = byte_4B69C1A;
      v31 = v29 >> byte_4B69C1A;
      v32 = &xmmword_4B69BF0 + 8;
      v33 = &xmmword_4B69C00 + 8;
      v34 = &qword_4B69C10;
      goto LABEL_39;
    }
  }
  else if ( xmmword_4B69C40 > v27 )
  {
    v29 = *(qword_4B69C38 + 4 * v27);
    v30 = byte_4B69C6A;
    v31 = v29 >> byte_4B69C6A;
    v32 = &xmmword_4B69C40 + 8;
    v33 = &xmmword_4B69C50 + 8;
    v34 = &qword_4B69C60;
LABEL_39:
    v36 = (*v33 + 0x10i64 * v31);
    if ( v31 == *v34 )
      v36 = v32;
    v37 = (*v36 + (v29 & ~(0xFFFFFFFF << v30)));
    goto LABEL_43;
  }
  v37 = 0i64;
LABEL_43:
  v38 = &szFile;
  if ( v37 )
    v38 = v37;
  v41 = v38;
  v40 = 1;
  v43 = *(&off_44A4CC0 + v28);
  v42 = 1;
  v45 = v19;
  v44 = 1;
  ctor_vprintf(a2, 0x100i64, "\n%s(stage: %s, currWeapon: %s, ", &v40, 3);
  log_combat(*(a1 + 0x38), *(a1 + 0x44), a2, v39);
  avprintf(a2, 1i64, ")", 0i64, 0);
  return a2;
}
