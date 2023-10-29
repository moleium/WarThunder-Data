void __fastcall unknown_setarmy(__int64 a1, char a2, __int64 a3)
{
  unsigned __int8 v5; // bl
  __int64 v6; // rsi
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  unsigned __int8 v10; // bl
  unsigned __int8 v11; // al
  __int64 v12; // rdx
  _QWORD *v13; // rax
  unsigned __int8 v14; // bl
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-68h] BYREF
  const char *v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+48h] [rbp-40h]
  int v24; // [rsp+50h] [rbp-38h]
  __int64 v25; // [rsp+58h] [rbp-30h]

  if ( *(a1 + 0x208) != a2 )
  {
    *(a1 + 0x80) |= 4u;
    LOBYTE(v18) = a2;
    sub_158CE00(a1 + 0x1E8, a1, &v18);
    v5 = v18;
    *(a1 + 0x208) = v18;
    v6 = *(a1 + 0x720);
    if ( v6 )
    {
      v7 = *(v6 + 0x1110);
      if ( v7 != v5 )
      {
        if ( !*(v6 + 0x10B0) )
        {
          v8 = *(v6 + 8) & 0x7FF;
          v19 = "setArmy";
          v18 = 1;
          v21 = v8;
          v20 = 2;
          v23 = v7;
          v22 = 2;
          v25 = v5;
          v24 = 2;
          dg_debug(3u, "%s fm %d army %d -> %d", &v18, 4);
          v7 = *(v6 + 0x1110);
        }
        LOBYTE(v18) = v5;
        if ( v7 != v5 )
        {
          sub_158CE00(v6 + 0x10F0, v6, &v18);
          *(v6 + 0x1110) = v18;
        }
      }
    }
    v9 = *(a1 + 0x6F8);
    if ( v9 )
    {
LABEL_9:
      v10 = *(a1 + 0x208);
      v11 = *(v9 + 0x1110);
      if ( v11 != v10 )
      {
        if ( !*(v9 + 0x858) )
        {
          v12 = v9[1] & 0x7FF;
          v19 = "setArmy";
          v18 = 1;
          v21 = v12;
          v20 = 2;
          v23 = v11;
          v22 = 2;
          v25 = v10;
          v24 = 2;
          dg_debug(3u, "%s fm %d army %d -> %d", &v18, 4);
          v11 = *(v9 + 0x1110);
        }
        LOBYTE(v18) = v10;
        if ( v11 != v10 )
        {
          sub_158CE00(v9 + 0x21E, v9, &v18);
          *(v9 + 0x1110) = v18;
        }
      }
      goto LABEL_29;
    }
    if ( *(a1 + 0x6F0) != 0xFFFF && (*(a1 + 0x668) != 4 || *(game + 0xCA)) )
    {
      if ( off_4B69C70 )
      {
        v13 = off_4B69C70();
        *(a1 + 0x6F8) = v13;
        if ( !v13 )
          goto LABEL_29;
        v9 = v13;
        if ( v13[0x217] != a1 )
        {
          (*(*v13 + 0x190i64))(v13, a1);
          v9 = *(a1 + 0x6F8);
        }
        v14 = *(a1 + 0x208);
        v15 = *(v9 + 0x1110);
        if ( v15 != v14 )
        {
          if ( !*(v9 + 0x858) )
          {
            v16 = v9[1] & 0x7FF;
            v19 = "setArmy";
            v18 = 1;
            v21 = v16;
            v20 = 2;
            v23 = v15;
            v22 = 2;
            v25 = v14;
            v24 = 2;
            dg_debug(3u, "%s fm %d army %d -> %d", &v18, 4);
            v15 = *(v9 + 0x1110);
          }
          LOBYTE(v18) = v14;
          if ( v15 != v14 )
          {
            sub_158CE00(v9 + 0x21E, v9, &v18);
            *(v9 + 0x1110) = v18;
          }
          v9 = *(a1 + 0x6F8);
          if ( !v9 )
            goto LABEL_29;
        }
        goto LABEL_9;
      }
      *(a1 + 0x6F8) = 0i64;
    }
LABEL_29:
    v17 = *(a1 + 0x208);
    v19 = *(a1 + 8);
    v18 = 2;
    v21 = v17;
    v20 = 2;
    v23 = a3;
    v22 = 1;
    dg_debug(0x504C554Du, "[%d].setTeam(%d) from %s", &v18, 3);
  }
}
