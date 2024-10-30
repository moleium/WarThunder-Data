void __fastcall on_key_up(__int64 ballistics, int a2, float a3)
{
  v69 = 0x20010429F05B6i64;
  v70 = __PAIR64__(LODWORD(a3), a2);
  sub_169B020(&entity_manager, &v69);
  sub_FAC6B0(off_4A6E990[a2]);
  v76 = *(&xmmword_4B73AB8 + 2);
  v75 = xmmword_4B73AB8;
  v7 = *(game + 0x428);
  if ( v7 )
  {
    switch ( a2 )
    {
      case 0x1FE:
        console::command("camera.freecamera");
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
                && (g_net && byte_4B17281 && *(qword_4B198C0 + 0x31) && (dword_4A6C5A0 & 0x10) != 0
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
      else if ( *(*(game + 0x440) + 0x161i64) && *(HudInfo + 0x2A2) )
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
  if ( !g_net )
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
        if ( ballistics_A68_qword )
          show_killstreak_wheel(ballistics_A68_qword, 0, v6, v31);
      }
      if ( !((a2 != 0x13E) | v25 ^ 1) )
      {
        if ( ballistics_A68_qword )
          hud_weaponwheel(ballistics_A68_qword, 0i64, v6, v31);
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
      v34 = *(ballistics_A68_qword + 0x103C);
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
          v42 = *(ballistics_A68_qword + 0x1050);
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
        v45 = *(ballistics_A68_qword + 0x1050);
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
        ...
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
          v23 = *(g_net + 0x1B8);
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
    if ( g_net )
    {
      v38 = *(g_net + 0x1B8);
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
