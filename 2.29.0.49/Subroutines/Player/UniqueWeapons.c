__int64 __fastcall UnitqueWeapons_34A560(__int64 LocalPlayerUnit)
{
  __int64 LocalPlayerWeaponInfo; // rax
  unsigned int v2; // er14
  __int64 *WeaponArrayBuffer; // rax
  __int64 WeaponArrayBuffer_ptr; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 first_weaponCount_mult_8; // rsi
  __int64 eight_mult_iteration; // rbp
  __int64 LocalPlayerWeaponInfoBuffer; // rax
  __int64 v15; // rbx
  __int64 WeaponArrayBuffer2; // rcx
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdi

  LocalPlayerWeaponInfo = *(_QWORD *)(LocalPlayerUnit + 0x11D0);
  v2 = 0xFFFFFFFF;
  if ( LocalPlayerWeaponInfo )
  {
    WeaponArrayBuffer = *(__int64 **)(LocalPlayerWeaponInfo + 0x300);
    if ( *((_DWORD *)WeaponArrayBuffer + 2) )   // True if in airplane
                                                // 
    {
      WeaponArrayBuffer_ptr = *WeaponArrayBuffer;
      v6 = 8i64 * *((unsigned int *)WeaponArrayBuffer + 2);
      v7 = 0i64;
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(WeaponArrayBuffer_ptr + v7) + 0x198i64))(*(_QWORD *)(WeaponArrayBuffer_ptr + v7)) )
      {
        v7 += 8i64;
        if ( v6 == v7 )
        {
          WeaponArrayBuffer = *(__int64 **)(*(_QWORD *)(LocalPlayerUnit + 0x11D0) + 0x300i64);
          goto LABEL_7;
        }
      }
      v2 = 0;
    }
    else                                        // if not in airplane
                                                // 
    {
LABEL_7:
      if ( *((_DWORD *)WeaponArrayBuffer + 6) )
      {
        v8 = WeaponArrayBuffer[2];
        v9 = 8i64 * *((unsigned int *)WeaponArrayBuffer + 6);
        v10 = 0i64;
        while ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + v10) + 0x198i64))(*(_QWORD *)(v8 + v10)) )
        {
          v10 += 8i64;
          if ( v9 == v10 )
          {
            WeaponArrayBuffer = *(__int64 **)(*(_QWORD *)(LocalPlayerUnit + 0x11D0) + 0x300i64);
            goto LABEL_12;
          }
        }
        v2 = 1;
      }
      else
      {
LABEL_12:
        if ( *((_DWORD *)WeaponArrayBuffer + 10) )
        {
          v11 = WeaponArrayBuffer[4];
          first_weaponCount_mult_8 = 8i64 * *((unsigned int *)WeaponArrayBuffer + 10);
          eight_mult_iteration = 0i64;
          while ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + eight_mult_iteration) + 0x198i64))(*(_QWORD *)(v11 + eight_mult_iteration)) )
          {
            eight_mult_iteration += 8i64;
            if ( first_weaponCount_mult_8 == eight_mult_iteration )
              goto LABEL_16;
          }
          v2 = 2;
        }
        else
        {
LABEL_16:
          LocalPlayerWeaponInfoBuffer = *(_QWORD *)(LocalPlayerUnit + 0x11D0);
          if ( *(_WORD *)(LocalPlayerUnit + 0x10B0) == 5// if LocalPlayerUnit state == 5 (WRONG)
                                                // 
            && *(_DWORD *)(LocalPlayerWeaponInfoBuffer + 0x18i64 * *(unsigned int *)(LocalPlayerUnit + 0x40A0) + 0x328) )
          {
            v2 = *(_DWORD *)(**(_QWORD **)(LocalPlayerWeaponInfoBuffer
                                         + 0x318
                                         + 0x18i64 * *(unsigned int *)(LocalPlayerUnit + 0x40A0))
                           + 0x10i64);
          }
          else if ( *(int *)(LocalPlayerWeaponInfoBuffer + 0x310) >= 18 )
          {
            v15 = 17i64;
            while ( 1 )
            {
              WeaponArrayBuffer2 = *(_QWORD *)(LocalPlayerWeaponInfoBuffer + 0x300);
              if ( *(_DWORD *)(WeaponArrayBuffer2 + 0x10 * v15 + 8) )
                break;
LABEL_23:
              if ( ++v15 >= *(int *)(LocalPlayerWeaponInfoBuffer + 0x310) )
                return v2;
            }
            v17 = *(_QWORD *)(WeaponArrayBuffer2 + 0x10 * v15);
            v18 = 8i64 * *(unsigned int *)(WeaponArrayBuffer2 + 0x10 * v15 + 8);
            v19 = 0i64;
            while ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v17 + v19) + 0x198i64))(*(_QWORD *)(v17 + v19)) )
            {
              v19 += 8i64;
              if ( v18 == v19 )
              {
                LocalPlayerWeaponInfoBuffer = *(_QWORD *)(LocalPlayerUnit + 0x11D0);
                goto LABEL_23;
              }
            }
            v2 = v15;
          }
        }
      }
    }
  }
  return v2;
}