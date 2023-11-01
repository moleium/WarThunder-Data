void __fastcall weapon_rocket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *ThreadLocalStoragePointer; // rcx
  __int64 v6; // rax
  __int64 Unit; // rdi
  unsigned int v8; // eax
  __int64 currWeapon; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned int *v12; // rax
  _QWORD *v13; // rdi
  int v14; // r8d
  _QWORD *v15; // rax
  bool v16; // bp
  __int64 UnitWeaponInfo; // rbp
  __int64 v18; // rcx
  int v19; // edx
  unsigned int v20; // eax
  __int64 WeaponArray; // rbp
  __int64 v22; // rsi
  __int64 ballistics; // rdx
  unsigned int v24; // ecx
  int v25; // ebp
  __int64 *v26; // rbp
  int v27; // ebp
  unsigned int v28; // ebp
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rbp
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rax
  int *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  int *v38; // rdi
  __int64 v39; // rax
  int v40; // [rsp+30h] [rbp-48h] BYREF
  __int64 v41; // [rsp+38h] [rbp-40h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  if ( !*(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
  {
    v13 = j__malloc_base(0x10ui64);
    if ( !v13 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x10i64) )
        {
          v41 = 0x10i64;
          v40 = 2;
          LOBYTE(v14) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v14,
            "Not enough memory to alloc %llu bytes",
            &v40,
            1);
        }
        v15 = j__malloc_base(0x10ui64);
      }
      while ( !v15 );
      v13 = v15;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v13) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    *v13 = &off_44A8D40;
    v13[1] = a1;
    sub_1641100(&qword_4B71860, v13, 0i64, 0i64, "DelayedAction @\n\t..\\..\\skyquake\\prog\\weapon\\rocket.cpp(885):");
    return;
  }
  v6 = sub_24BEA0(a1);
  if ( !v6 )
  {
    v16 = 0;
    goto LABEL_51;
  }
  Unit = v6;
  v8 = *(a1 + 0x648);
  if ( (*(Unit + 0x1058) & 0x2000010) == 0
    && (UnitWeaponInfo = *(Unit + 0x11D0)) != 0
    && (v18 = *(UnitWeaponInfo + 0x2E0), *(UnitWeaponInfo + 0x2E0)) )
  {
    v19 = v8;
    v20 = HIWORD(v8);
    WeaponArray = *(UnitWeaponInfo + 0x2D0);
    v22 = 0i64;
    while ( 1 )
    {
      currWeapon = *(WeaponArray + 8 * v22);
      if ( *(currWeapon + 0x18) == v19 && *(currWeapon + 0x10) == v20 )
        break;
      if ( v18 == ++v22 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    currWeapon = 0i64;
  }
  v10 = *(a1 + 0x670);
  if ( v10 )
  {
    if ( *&qword_4AE58C0 == Unit )
    {
      ballistics = *(game + 0x440);
      v24 = *(ballistics + 0x3F4);
      if ( v24 <= 0x18 && (v25 = 0x100F824, _bittest(&v25, v24))
        || *(Unit + 0x10B0) == 3
        && ((v30 = *(ballistics + 0x3F0), v30 < *(ballistics + 0x278))
         && (v31 = *(*(ballistics + 0x268) + 8 * v30)) != 0
         && *(v31 + 0x28) == 1
         || v24 == 0x15) )
      {
        v26 = (v10 + 0x448);
      }
      else
      {
        v26 = (v10 + 0x440);
      }
      v11 = *v26;
      if ( v24 <= 0x18 && (v27 = 0x100F824, _bittest(&v27, v24))
        || *(Unit + 0x10B0) == 3
        && ((v32 = *(ballistics + 0x3F0), v32 < *(ballistics + 0x278))
         && (v33 = *(*(ballistics + 0x268) + 8 * v32)) != 0
         && *(v33 + 0x28) == 1
         || v24 == 0x15) )
      {
        v12 = (v10 + 0x468);
        if ( !currWeapon )
          goto LABEL_45;
      }
      else
      {
        v12 = (v10 + 0x464);
        if ( !currWeapon )
          goto LABEL_45;
      }
    }
    else
    {
      v11 = *(v10 + 0x450);
      v12 = (v10 + 0x46C);
      if ( !currWeapon )
        goto LABEL_45;
    }
    if ( *(a1 + 0x6D0) )
    {
      v28 = *v12;
      v29 = (*(*currWeapon + 0x1E8i64))(currWeapon);
      sub_EEA770(Unit, v29, v11, v28);
      goto LABEL_46;
    }
  }
LABEL_45:
  if ( !currWeapon )
    goto LABEL_49;
LABEL_46:
  v34 = *(currWeapon + 0x340);
  if ( !v34 )
  {
LABEL_49:
    v16 = 0;
    if ( *&qword_4AE58C0 != Unit )
      goto LABEL_51;
    goto LABEL_50;
  }
  v16 = *(v34 + 0x15C) != 0;
  if ( *&qword_4AE58C0 != Unit )
    goto LABEL_51;
LABEL_50:
  byte_4A7503C = 1;
LABEL_51:
  v35 = *(a1 + 0x6C8);
  if ( v35 )
  {
    sub_1665AB0(*(a1 + 0x6C8));
    if ( v35 != &byte_4B73348 )
    {
      EnterCriticalSection(&stru_4B776C8);
      (*(*off_4B73580 + 0x10i64))(off_4B73580, v35);
      LeaveCriticalSection(&stru_4B776C8);
    }
    *(a1 + 0x6C8) = 0i64;
  }
  if ( !v16 )
  {
    v36 = *(a1 + 0x670);
    if ( v36 )
    {
      if ( *(v36 + 0x4B8) <= 0.0 && *(a1 + 0x13C) > *(*(game + 0x498) + 0x1EA4i64) )
      {
        if ( *(v36 + 0x458) )
        {
          EnterCriticalSection(&stru_4B776C8);
          v37 = (*(*off_4B73580 + 8i64))(off_4B73580);
          v38 = &byte_4B73348;
          if ( v37 )
            v38 = v37;
          LeaveCriticalSection(&stru_4B776C8);
          sub_1665F70(v38, *(*(a1 + 0x670) + 0x458i64));
LABEL_67:
          *(a1 + 0x6C8) = v38;
          sub_1666510(v38, 0, 0xFA, 0, 0i64);
          sub_16667E0(*(a1 + 0x6C8), a1 + 0x2E0, &xmmword_4514A60, a1 + 0x2FC, 0i64);
          sub_1666BA0(*(a1 + 0x6C8));
          return;
        }
LABEL_64:
        EnterCriticalSection(&stru_4B776C8);
        v39 = (*(*off_4B73580 + 8i64))(off_4B73580);
        v38 = &byte_4B73348;
        if ( v39 )
          v38 = v39;
        LeaveCriticalSection(&stru_4B776C8);
        sub_EE8DB0("eventRocketFly");
        sub_EE8DB0("pathGuns");
        sub_1665C80(v38, 1);
        goto LABEL_67;
      }
    }
    else if ( *(a1 + 0x13C) > *(*(game + 0x498) + 0x1EA4i64) )
    {
      goto LABEL_64;
    }
  }
}
