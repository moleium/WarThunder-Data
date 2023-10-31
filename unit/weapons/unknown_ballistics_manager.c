void __fastcall unknown_ballistics_manager(__int64 ballistics, int a2, float a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // rax
  double v18; // xmm6_8
  _BYTE *v19; // rax
  char v20; // bl
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // r14
  char v25; // r13
  bool v26; // si
  bool v27; // bp
  bool v28; // r12
  unsigned __int8 v29; // al
  __int16 v30; // dx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // edi
  __int64 v40; // rdx
  _OWORD *v41; // rax
  int v42; // edx
  unsigned int v43; // ebx
  bool v44; // sf
  int v45; // ecx
  unsigned int v46; // ecx
  __int64 v47; // rax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  char v50; // cl
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 ballistics_; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  bool v60; // dl
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // [rsp+20h] [rbp-F8h]
  unsigned int v65; // [rsp+34h] [rbp-E4h]
  bool v66; // [rsp+38h] [rbp-E0h]
  unsigned __int8 v67; // [rsp+3Ch] [rbp-DCh]
  _BYTE v68[24]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v69; // [rsp+58h] [rbp-C0h] BYREF
  __int64 (__fastcall **v70)(void *); // [rsp+60h] [rbp-B8h] BYREF
  __int128 v71; // [rsp+68h] [rbp-B0h] BYREF
  __int64 (__fastcall **v72)(void *); // [rsp+78h] [rbp-A0h]
  __int128 v73; // [rsp+80h] [rbp-98h] BYREF
  __int128 v74; // [rsp+90h] [rbp-88h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-78h] BYREF
  int v76; // [rsp+A8h] [rbp-70h]
  char v77; // [rsp+B0h] [rbp-68h] BYREF
  char v78; // [rsp+B8h] [rbp-60h] BYREF

  v69 = 0x20010429F05B6i64;
  v70 = __PAIR64__(LODWORD(a3), a2);
  sub_169B020(&unk_4B69E58, &v69);
  sub_FAC6B0(off_4A6E990[a2]);
  v76 = *(&xmmword_4B73AB8 + 2);
  v75 = xmmword_4B73AB8;
  v7 = *(game + 0x428);
  if ( v7 )
  {
    switch ( a2 )
    {
      case 0x1FE:
        sub_1778040("camera.freecamera");
        break;
      case 0x1FF:
        v9 = (*(*v7 + 0x60i64))(*(game + 0x428));
        *(v9 + 0x34) &= ~1u;
        break;
      case 0x200:
        v10 = (*(*v7 + 0x60i64))(*(game + 0x428));
        *(v10 + 0x34) &= ~2u;
        break;
      case 0x201:
        v11 = (*(*v7 + 0x60i64))(*(game + 0x428));
        *(v11 + 0x34) &= ~4u;
        break;
      case 0x202:
        v12 = (*(*v7 + 0x60i64))(*(game + 0x428));
        *(v12 + 0x34) &= ~8u;
        break;
      default:
        return;
    }
    return;
  }
  switch ( a2 )
  {
    case 0xA9:
      if ( (dword_4A6C5A0 & 0x10000) != 0 )
      {
        v70 = &off_451E9F8;
        *(&v71 + 1) = 0i64;
        LODWORD(v71) = 0x1000001;
        BYTE4(v71) = 0;
        v72 = &off_451E9F8;
        *(&v73 + 1) = 0i64;
        LODWORD(v73) = 0x1000001;
        BYTE4(v73) = 0;
        v69 = DagorSQVM;
        *v68 = *(qword_4B849F8 + 8);
        if ( (v68[3] & 8) != 0 )
        {
          v13 = sub_28B5100(*(DagorSQVM + 0x140) + 0x38, v68, &v74, &v77, 1);
          ++*(v13 + 0x10);
          if ( (BYTE3(v71) & 8) != 0 )
            sub_28B55C0((*(DagorSQVM + 0x140) + 0x38i64), &v71);
        }
        v71 = *v68;
        sub_18ED7E0(&v70, v68, "on_multifunc_menu_activate_item");
        v74 = *&v68[8];
        if ( (v68[0xB] & 8) != 0 )
        {
          LOBYTE(v64) = 1;
          v14 = sub_28B5100(*(DagorSQVM + 0x140) + 0x38, &v74, &v77, &v78, v64);
          ++*(v14 + 0x10);
        }
        if ( (BYTE3(v73) & 8) != 0 )
          sub_28B55C0((*(DagorSQVM + 0x140) + 0x38i64), &v73);
        v73 = v74;
        *v68 = &off_451E9F8;
        if ( DagorSQVM )
        {
          v74 = *&v68[8];
          *&v68[0x10] = 0i64;
          *&v68[8] = 0x1000001;
          v68[0xC] = 0;
          if ( (BYTE3(v74) & 8) != 0 )
            sub_28B55C0((*(DagorSQVM + 0x140) + 0x38i64), &v74);
        }
        if ( v73 != 0x1000001 )
          sub_508590(&v69);
        v72 = &off_451E9F8;
        v15 = DagorSQVM;
        if ( DagorSQVM )
        {
          *v68 = v73;
          *(&v73 + 1) = 0i64;
          LODWORD(v73) = 0x1000001;
          BYTE4(v73) = 0;
          if ( (v68[3] & 8) != 0 )
          {
            sub_28B55C0((*(DagorSQVM + 0x140) + 0x38i64), v68);
            v15 = DagorSQVM;
            v70 = &off_451E9F8;
            if ( !DagorSQVM )
              break;
          }
          else
          {
            v70 = &off_451E9F8;
          }
          *v68 = v71;
          *(&v71 + 1) = 0i64;
          LODWORD(v71) = 0x1000001;
          BYTE4(v71) = 0;
          if ( (v68[3] & 8) != 0 )
            sub_28B55C0((*(v15 + 0x140) + 0x38i64), v68);
        }
      }
      break;
    case 0x1E6:
      if ( *(game + 0xCD) )
      {
        LOBYTE(word_4B51C00) = 0;
        if ( qword_4B51C38 )
        {
          LOBYTE(v6) = 1;
          sub_9419C0(*(qword_4B51C38 + 8), *qword_4B51C38, v6, 0i64);
          v16 = qword_4B51C38;
          if ( qword_4B51C38 )
          {
            qword_4B51C38 = 0i64;
            sub_941E60(*(v16 + 1), *v16);
          }
        }
      }
      break;
    case 0x1E5:
      if ( qword_4B84770 )
      {
        v8 = (*(*qword_4B84770 + 0x38i64))(qword_4B84770, 0i64);
        sub_B1A290(&off_4B19860, v8, 2i64, 0i64);
      }
      break;
    default:
      if ( a2 != 0xF5 || byte_4B17281 )
      {
        if ( a2 == 0xD1 )
        {
          if ( (dword_4A6C5A0 & 0x100) != 0 && byte_4B177B8 )
            sub_A72340();
        }
        else if ( a2 != 0xF6 || byte_4B17281 )
        {
          if ( a2 <= 0xB6 )
          {
            if ( a2 != 0x32 )
            {
              if ( a2 != 0x64 )
                break;
              if ( qword_4B198C0
                && !*(game + 0x102)
                && ((sub_17E44A0(game, v5, v6) - dword_4A6C5A4) * *&dword_44A01A0) >= *&dword_44801CC
                && (qword_4B507E8 && byte_4B17281 && *(qword_4B198C0 + 0x31) && (dword_4A6C5A0 & 0x10) != 0
                 || *(game + 0x100) && *(game + 0x101)) )
              {
                sub_9A5750(0i64);
                sub_9A5E50();
                break;
              }
            }
            dword_4A6C5A4 = 0xFFFFFFFF;
            break;
          }
          if ( a2 == 0x18C )
          {
            sub_56BBE0();
          }
          else if ( a2 == 0xB9 )
          {
            v19 = *(game + 0x440);
            v5 = v19[0x8B1];
            v19[0x8B0] = v19[0x8AF];
            v19[0x8AF] = v5;
          }
          else if ( a2 == 0xB7 && *(*(game + 0x430) + 0xB8i64) && qword_4B121B0 && qword_4B121B8 )
          {
            LOBYTE(v5) = 1;
            (*(*qword_4B121B8 + 0x58i64))(qword_4B121B8, v5);
          }
        }
        else
        {
          sub_A72270();
        }
      }
      else if ( *(*(game + 0x440) + 0x161i64) && *(qword_4ACEE78 + 0x2A2) )
      {
        v17 = *(game + 0x420);
        v5 = byte_4B177B8;
        if ( *(v17 + 0x3B0) )
        {
          if ( byte_4B177B8 )
            break;
          v18 = *(v17 + 0xA0);
          if ( sub_5655B0(game) <= v18 )
            break;
        }
        else if ( byte_4B177B8 )
        {
          sub_A72160();
          break;
        }
        sub_A71B30();
      }
      break;
  }
  if ( qword_4B198C0 && *(qword_4B198C0 + 0x2B) && (dword_4A6C5A0 & 0x2F) == 0 )
  {
    if ( *(qword_4B198C0 + 0x2A) )
      return;
    v22 = *(qword_4B198C0 + 0x2D);
    if ( v22 )
    {
      if ( dword_4B1C508 == 1 && *(game + 0x100) && *(game + 0x101) )
        return;
    }
    v5 = *(game + 0x440);
    if ( v5 )
    {
      if ( *(v5 + 0x3F4) == 0xA || *(v5 + 0x1A4) )
        return;
    }
    if ( **(game + 0x108) != 2 || !v22 )
      return;
  }
  if ( *(game + 0xCD) )
    return;
  if ( !qword_4B507E8 )
  {
LABEL_111:
    v24 = LocalUnit;
    if ( LocalUnit )
    {
      if ( *(LocalUnit + 0x10B0) == 5 )
        v25 = (*(*LocalUnit + 0x118i64))(LocalUnit) ^ 1;
      else
        v25 = 0;
      v29 = (*(*v24 + 0x118i64))(v24);
      v30 = *(v24 + 0x10B0);
      v66 = v30 == 3;
      v26 = v30 == 0xB;
      v27 = v30 == 0xF;
      v65 = (*(v24 + 0x1080) & 0x8000000u) >> 0x1B;
      v28 = (*(v24 + 0x1080) & 0x8000000) == 0 && v30 == 0;
      LOBYTE(v31) = a2 == 0x1F9;
      LOBYTE(v6) = a2 == 0x217;
      v67 = v29;
      if ( (v29 & (a2 == 0x190)) != 0
        || (v25 & (a2 == 0x13D)) != 0
        || v30 == 3 && a2 == 0xBE
        || v26 && a2 == 0x1B6
        || (LOBYTE(v31) = v28 & v31, v31)
        || (LOBYTE(v6) = v27 & v6, v6) )
      {
        if ( qword_4B19AA0 )
          unknown_killstreakwheel(qword_4B19AA0, 0, v6, v31);
      }
      if ( !((a2 != 0x13E) | v25 ^ 1) )
      {
        if ( qword_4B19AA0 )
          hud_weaponwheel(qword_4B19AA0, 0i64, v6, v31);
        v32 = *(game + 0x450);
        v25 = 1;
        if ( v32 && *(v32 + 0x5CA) )
          goto LABEL_149;
        goto LABEL_142;
      }
    }
    else
    {
      LOBYTE(v65) = 0;
      v26 = 0;
      v67 = 0;
      v25 = 0;
      v66 = 0;
      v27 = 0;
      v28 = 0;
    }
    if ( (a2 - 0x9C) > 7 )
    {
      if ( a2 == 0x5A )
      {
        if ( sub_B96590(0i64) != 1 )
        {
          qword_4AD5AD0 = 0i64;
          qword_4AD5AD8 = 0i64;
          byte_4AD5B68 = 0;
          dword_4AD5B74 = 0;
          qword_4AD5B6C = 0i64;
          dword_4AD5B7C = 0;
          dword_4AD5B78 = 0;
        }
        *(*(game + 0x440) + 0xB8i64) = 0;
      }
    }
    else if ( (byte_4AD2BD0 || byte_4AD2BD5 == 1) && a2 - 0x9C < qword_4B174D8 )
    {
      byte_4AD2BD5 = 0;
      return;
    }
    v33 = *(game + 0x450);
    if ( v33 && *(v33 + 0x5CA) )
      goto LABEL_147;
    if ( !v24 )
      return;
LABEL_142:
    if ( *(v24 + 0x10A8) > 1u )
      return;
    if ( (*(v24 + 0x1058) & 0x7000014) != 0 )
    {
      if ( a2 != 0xE && a2 != 0x170 )
        return;
LABEL_149:
      v34 = *(qword_4B19AA0 + 0x103C);
      v35 = (v34 + 0x141);
      v36 = 0xFFFFFFFF;
      if ( v34 >= 0 )
        v36 = v34 + 0x141;
      if ( v36 == a2 )
      {
        *(ballistics + 0x68) = 0;
      }
      else
      {
        if ( v66 )
        {
          v35 = *(game + 0x450);
          if ( v35 )
            LOBYTE(v35) = *(v35 + 0x5CA) != 0;
          else
            v35 = 0i64;
          if ( a2 == 0xE3 && !v35 )
            goto LABEL_190;
        }
        if ( v26 )
        {
          v35 = *(game + 0x450);
          if ( v35 )
            LOBYTE(v35) = *(v35 + 0x5CA) != 0;
          else
            v35 = 0i64;
          if ( a2 == 0x1A7 && !v35 )
            goto LABEL_190;
        }
        if ( v27 )
        {
          v35 = *(game + 0x450);
          if ( v35 )
            LOBYTE(v35) = *(v35 + 0x5CA) != 0;
          else
            v35 = 0i64;
          if ( a2 == 0x218 && !v35 )
            goto LABEL_190;
        }
        if ( v25 )
        {
          v42 = *(qword_4B19AA0 + 0x1050);
          v43 = v42 + 0x141;
          v44 = v42 < 0;
          v35 = 0xFFFFFFFFi64;
          if ( !v44 )
            v35 = v43;
          if ( v35 == a2 )
            goto LABEL_190;
        }
        if ( !v67 )
          goto LABEL_196;
        v45 = *(qword_4B19AA0 + 0x1050);
        v35 = (v45 + 0x191);
        v44 = v45 < 0;
        v46 = 0xFFFFFFFF;
        if ( !v44 )
          v46 = v35;
        if ( v46 == a2 )
        {
LABEL_190:
          sub_1119800(ballistics, 0i64);
        }
        else
        {
LABEL_196:
          if ( v66 )
          {
            v48 = v34 + 0xBF;
            v44 = v34 < 0;
            v49 = 0xFFFFFFFF;
            if ( !v44 )
              v49 = v48;
            if ( v49 == a2 )
              sub_1119620(ballistics, 0i64);
          }
        }
      }
      switch ( a2 )
      {
        case 1:
          if ( !v25 )
            sub_111A070(ballistics, &xmmword_4B73A88, 0i64);
          return;
        case 2:
          if ( v28 )
            goto LABEL_261;
          return;
        case 3:
        case 4:
        case 0x16C:
        case 0x16D:
          if ( v24 && !*(v24 + 0x10B0) )
            *(*(v24 + 0x2E68) + 0x2490i64) = 0;
          sub_1118540(ballistics, 4i64);
          sub_1118540(ballistics, 6i64);
          sub_1118540(ballistics, 3i64);
          v47 = game;
          *(*(game + 0x440) + 0x2E9Di64) = 0;
          *(*(v47 + 0x440) + 0xA31i64) = 0;
          return;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5B:
        case 0x5C:
        case 0x5E:
        case 0x5F:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7A:
        case 0x7B:
        case 0x7C:
        case 0x7D:
        case 0x7E:
        case 0x7F:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8A:
        case 0x8B:
        case 0x8C:
        case 0x8D:
        case 0x8E:
        case 0x8F:
        case 0x90:
        case 0x91:
        case 0x92:
        case 0x93:
        case 0x94:
        case 0x95:
        case 0x96:
        case 0x97:
        case 0x98:
        case 0x99:
        case 0x9A:
        case 0x9B:
        case 0x9C:
        case 0x9D:
        case 0x9E:
        case 0x9F:
        case 0xA0:
        case 0xA1:
        case 0xA2:
        case 0xA3:
        case 0xA4:
        case 0xA5:
        case 0xA6:
        case 0xA7:
        case 0xA8:
        case 0xA9:
        case 0xAA:
        case 0xAB:
        case 0xAC:
        case 0xAD:
        case 0xAE:
        case 0xAF:
        case 0xB0:
        case 0xB1:
        case 0xB2:
        case 0xB3:
        case 0xB4:
        case 0xB5:
        case 0xB6:
        case 0xB7:
        case 0xB8:
        case 0xB9:
        case 0xBA:
        case 0xBB:
        case 0xBC:
        case 0xBD:
        case 0xBE:
        case 0xBF:
        case 0xC0:
        case 0xC1:
        case 0xC2:
        case 0xC3:
        case 0xC4:
        case 0xC5:
        case 0xC6:
        case 0xC7:
        case 0xC8:
        case 0xC9:
        case 0xCA:
        case 0xCB:
        case 0xCC:
        case 0xCD:
        case 0xCE:
        case 0xCF:
        case 0xD0:
        case 0xD1:
        case 0xD2:
        case 0xD3:
        case 0xD4:
        case 0xD5:
        case 0xD6:
        case 0xD7:
        case 0xD8:
        case 0xD9:
        case 0xDA:
        case 0xDB:
        case 0xDC:
        case 0xDD:
        case 0xDE:
        case 0xDF:
        case 0xE0:
        case 0xE1:
        case 0xE2:
        case 0xE3:
        case 0xE4:
        case 0xE5:
        case 0xE6:
        case 0xE7:
        case 0xE8:
        case 0xE9:
        case 0xEA:
        case 0xEB:
        case 0xEC:
        case 0xED:
        case 0xEE:
        case 0xEF:
        case 0xF0:
        case 0xF1:
        case 0xF2:
        case 0xF3:
        case 0xF4:
        case 0xF5:
        case 0xF6:
        case 0xF7:
        case 0xF8:
        case 0xF9:
        case 0xFA:
        case 0xFB:
        case 0xFC:
        case 0xFD:
        case 0xFE:
        case 0xFF:
        case 0x100:
        case 0x108:
        case 0x109:
        case 0x10A:
        case 0x10C:
        case 0x10D:
        case 0x10E:
        case 0x10F:
        case 0x110:
        case 0x111:
        case 0x112:
        case 0x113:
        case 0x114:
        case 0x115:
        case 0x116:
        case 0x117:
        case 0x118:
        case 0x119:
        case 0x11A:
        case 0x11B:
        case 0x11C:
        case 0x11D:
        case 0x11E:
        case 0x11F:
        case 0x120:
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x128:
        case 0x129:
        case 0x12A:
        case 0x12B:
        case 0x12C:
        case 0x12D:
        case 0x12E:
        case 0x12F:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13A:
        case 0x13B:
        case 0x13C:
        case 0x13D:
        case 0x13E:
        case 0x13F:
        case 0x140:
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14A:
        case 0x14B:
        case 0x14C:
        case 0x14D:
        case 0x14E:
        case 0x14F:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15A:
        case 0x15B:
        case 0x15C:
        case 0x15D:
        case 0x15E:
        case 0x15F:
        case 0x160:
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16A:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x177:
        case 0x178:
        case 0x17C:
        case 0x17D:
        case 0x17E:
        case 0x17F:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18A:
        case 0x18B:
        case 0x18C:
        case 0x18D:
        case 0x18E:
        case 0x18F:
        case 0x190:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19A:
        case 0x19B:
        case 0x19C:
        case 0x19D:
        case 0x19E:
        case 0x19F:
        case 0x1A0:
        case 0x1A1:
        case 0x1A2:
        case 0x1A3:
        case 0x1A4:
        case 0x1A5:
        case 0x1A6:
        case 0x1A7:
        case 0x1A8:
        case 0x1A9:
        case 0x1AA:
        case 0x1AB:
        case 0x1AC:
        case 0x1AD:
        case 0x1AE:
        case 0x1AF:
        case 0x1B0:
        case 0x1B1:
        case 0x1B2:
        case 0x1B3:
        case 0x1B4:
        case 0x1B5:
        case 0x1B6:
          return;
        case 0xB:
        case 0xC:
          if ( v28 )
            goto LABEL_216;
          return;
        case 0xD:
        case 0xE:
          if ( v28 )
            goto LABEL_218;
          return;
        case 0xF:
          if ( v28 )
            goto LABEL_263;
          return;
        case 0x10:
          if ( v28 )
            goto LABEL_265;
          return;
        case 0x11:
          if ( v28 )
            goto LABEL_267;
          return;
        case 0x12:
          sub_1118540(ballistics, 0xAi64);
          return;
        case 0x13:
          sub_1118540(ballistics, 0xDi64);
          return;
        case 0x17:
          if ( v24 && v28 )
            goto LABEL_276;
          return;
        case 0x20:
          if ( v28 )
            goto LABEL_237;
          return;
        case 0x5D:
          if ( v25 )
            sub_1113E10(ballistics, &v75);
          return;
        case 0x67:
          if ( v24 && v28 )
          {
            sub_112F170(ballistics, 9i64);
            sub_112F170(ballistics, 7i64);
            LOBYTE(v53) = 1;
            sub_112F1F0(ballistics, v53);
          }
          return;
        case 0x68:
        case 0x6A:
          if ( v24 && v28 )
            goto LABEL_273;
          return;
        case 0x69:
          if ( v24 && v28 )
          {
            sub_112F170(ballistics, 9i64);
            sub_112F170(ballistics, 7i64);
            v54 = sub_3476D0(v24);
            LOBYTE(v55) = *(v54 + 0x40) != 0 && *(v54 + 0x40) != 3;
            sub_112F1F0(ballistics, v55);
          }
          return;
        case 0x6B:
          sub_112ED60(ballistics);
          return;
        case 0x101:
        case 0x102:
          sub_1128630(ballistics, 0i64, 0i64);
          return;
        case 0x103:
        case 0x104:
          sub_11286C0(ballistics, 0i64, 0i64);
          return;
        case 0x105:
        case 0x106:
          sub_1128750(ballistics, 0i64, 0i64);
          return;
        case 0x107:
          if ( LocalUnit )
          {
            if ( *(LocalUnit + 0x10B0) == 3 && *(LocalUnit + 0x2D70) > 0.0 )
            {
              v56 = *(LocalUnit + 0x3030);
              if ( !*(v56 + 0x2880) )
                *(v56 + 0x2D54) = 0;
            }
          }
          return;
        case 0x10B:
          if ( v24 )
          {
            if ( *(v24 + 0x10B0) == 5 )
            {
              ballistics_ = *(game + 0x440);
              v58 = *(ballistics_ + 0x3F0);
              if ( v58 < *(ballistics_ + 0x278) )
              {
                v59 = *(*(ballistics_ + 0x268) + 8 * v58);
                if ( v59 )
                {
                  if ( (*(v59 + 0x28) & 0xFFFFFFFE) == 2 )
                  {
                    v60 = *(ballistics + 0x6D) == 0;
                    *(ballistics_ + 0x97D) = 0;
                    sub_1112C80(ballistics, v60, 0, 0);
                  }
                }
              }
            }
          }
          return;
        case 0x127:
          if ( v25 )
          {
            v61 = 0x1B7i64;
            goto LABEL_279;
          }
          return;
        case 0x16B:
          if ( v65 )
LABEL_261:
            LOBYTE(dword_4AD2C5D) = 1;
          return;
        case 0x16E:
        case 0x16F:
          if ( v65 )
LABEL_216:
            sub_1119340(ballistics);
          return;
        case 0x170:
        case 0x171:
          if ( v65 )
LABEL_218:
            sub_1118540(ballistics, 3i64);
          return;
        case 0x175:
        case 0x176:
          if ( v65 )
LABEL_237:
            sub_1118540(ballistics, 0xEi64);
          return;
        case 0x179:
          if ( v65 )
LABEL_263:
            sub_1118540(ballistics, 7i64);
          return;
        case 0x17A:
          if ( v65 )
LABEL_265:
            sub_1118540(ballistics, 8i64);
          return;
        case 0x17B:
          if ( v65 )
LABEL_267:
            sub_1118540(ballistics, 9i64);
          return;
        case 0x180:
          if ( v24 && v65 == 1 )
          {
            sub_112F170(ballistics, 9i64);
            sub_112F170(ballistics, 7i64);
            sub_112F1F0(ballistics, 0i64);
          }
          return;
        case 0x181:
          if ( v24 && v65 == 1 )
          {
LABEL_273:
            sub_112F170(ballistics, 9i64);
            sub_112F170(ballistics, 7i64);
            sub_11300A0(ballistics);
          }
          return;
        case 0x182:
          if ( v24 && v65 == 1 )
          {
LABEL_276:
            LOBYTE(v35) = *(ballistics + 0x6F) == 0;
            LOBYTE(v6) = 1;
            sub_1112EC0(ballistics, v35, v6);
          }
          return;
        case 0x1B7:
          if ( v25 )
          {
            v61 = 0x127i64;
LABEL_279:
            LOBYTE(v35) = 1;
            if ( !sub_4FC030(v61, v35) )
            {
              v62 = game;
              *(*(game + 0x440) + 0xB0i64) = 0;
              *(*(v62 + 0x440) + 0x5D8i64) = 0;
              v63 = *(v62 + 0x440);
              if ( *(v63 + 0x5DA) )
                *(v63 + 0x5DA) = 0;
            }
          }
          return;
        default:
          v50 = *(*(game + 0x430) + 0x1F6i64);
          if ( a2 == 0x1EA )
          {
            if ( !v50 )
              return;
            v51 = *(game + 0x440);
            v52 = 0i64;
          }
          else
          {
            if ( a2 != 0x1EB || !v50 )
              return;
            v51 = *(game + 0x440);
            v52 = 1i64;
          }
          sub_467E60(v51, v52, 0i64);
          return;
      }
    }
LABEL_147:
    if ( a2 == 0x14D )
    {
      *(ballistics + 0x64) = 0;
      return;
    }
    goto LABEL_149;
  }
  if ( (dword_4A6C5A0 & 0x20) == 0 || byte_4AD2BD8 != 1 )
    goto LABEL_105;
  if ( a2 == 0x40 )
  {
    v20 = 1;
    LOBYTE(v5) = 1;
    if ( sub_1924300(&unk_4A6C6B0, v5) )
      goto LABEL_105;
  }
  else
  {
    v20 = 1;
    LOBYTE(v5) = 1;
    if ( sub_1924300(&unk_4A6C6AC, v5) )
      goto LABEL_105;
    if ( a2 != 0x41 )
    {
      v20 = 1;
      LOBYTE(v21) = 1;
      if ( sub_1924300(&unk_4A6C6B0, v21) )
        goto LABEL_105;
      if ( a2 == 0x42 )
        goto LABEL_157;
      v20 = 0;
    }
  }
  LOBYTE(v21) = 1;
  if ( sub_1924300(&unk_4A6C6B4, v21) )
    goto LABEL_105;
  if ( a2 != 0x43 )
  {
LABEL_157:
    LOBYTE(v21) = 1;
    if ( !sub_1924300(&unk_4A6C6B8, v21) && v20 )
      goto LABEL_159;
LABEL_105:
    if ( a2 == 0x44 && (dword_4A6C5A0 & 0x2000) != 0 )
    {
      if ( qword_4B198C0 )
      {
        if ( sub_B1C7B0("is_chat_screen_allowed", 0i64) )
        {
          v23 = *(qword_4B507E8 + 0x1B8);
          if ( v23 )
          {
            (*(**(v23 + 8) + 0x30i64))(*(v23 + 8));
            return;
          }
        }
      }
    }
    goto LABEL_111;
  }
LABEL_159:
  byte_4AD2BD8 = 0;
  if ( qword_4B198C0 && sub_B1C7B0("is_chat_screen_allowed", 0i64) )
  {
    if ( qword_4B507E8 )
    {
      v38 = *(qword_4B507E8 + 0x1B8);
      if ( v38 )
      {
        v39 = a2 - 0x41;
        if ( v39 <= 2 )
        {
          v40 = dword_44B39A0[v39];
          *(v38 + 0x18) = v40;
          (*(**(v38 + 8) + 0x18i64))(*(v38 + 8), v40, 0i64);
        }
      }
    }
    LOBYTE(v37) = (dword_4A6C5A0 & 0x2000) == 0;
    sub_B23600(v37);
    v41 = off_4B85A38;
    if ( off_4B85A38 )
    {
      *(off_4B85A38 + 1) = 0i64;
      *v41 = 0i64;
    }
  }
}
