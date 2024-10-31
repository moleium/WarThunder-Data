__int64 __fastcall hud_indicators(_QWORD *a1, __int64 *a2)
{
  v2 = a2;
  v4 = *(*(game + 0x430) + 0x48i64);
  v5 = *a2;
  v6 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v7 = data::get_name_id("indicatorsPresets", 0x11ui64);
    v8 = *(v5 + 0x50);
    if ( v8 )
    {
      v9 = *(v8 + 0x20);
      if ( !*(v5 + 0x20) )
        goto LABEL_8;
    }
    else
    {
      v9 = 0;
      if ( !*(v5 + 0x20) )
        goto LABEL_8;
    }
    v10 = data::get_name_id(v5, "indicatorsPresets", 0x11i64, v7);
    if ( v10 >= 0 )
    {
      v11 = v9 + v10;
LABEL_10:
      v6 = v11;
      goto LABEL_11;
    }
LABEL_8:
    if ( !v9 )
      goto LABEL_11;
    v11 = data::get_name_id(*(v5 + 0x50), "indicatorsPresets", 0x11i64, v7);
    goto LABEL_10;
  }
LABEL_11:
  v12 = *(v2 + 0x10);
  if ( v12 == 0xFFFFFFFF )
  {
    v18 = *(v2 + 0xE);
    if ( !*(v2 + 0xE) )
      goto LABEL_33;
    v19 = v6 + 1;
    v20 = *(v2 + 0x18);
    v21 = *v20;
    v22 = *(v20 + 2) - 8 * v18;
    v23 = 0;
    while ( (*(*(v21 + v22) + 8i64) & 0x3FFFFFFF) != v19 )
    {
      ++v23;
      v22 += 8i64;
      if ( v18 == v23 )
        goto LABEL_33;
    }
    if ( v23 >= v18 )
      goto LABEL_33;
    v25 = *(v21 + v22);
    if ( !v25 )
      goto LABEL_33;
  }
  else
  {
    v13 = *(v2 + 0xE);
    if ( v12 >= (v12 + v13) )
      goto LABEL_33;
    v14 = v6 + 1;
    v15 = *(*v2 + 0x5Ci64) + *v2 + 0x90i64;
    v16 = 0;
    while ( 1 )
    {
      v17 = 0x20i64 * (v12 + v16);
      if ( (*(v15 + v17 + 8) & 0x3FFFFFFF) == v14 )
        break;
      if ( v13 == ++v16 )
        goto LABEL_33;
    }
    v24 = v17 + v15;
    v25 = 0i64;
    if ( v16 < v13 )
      v25 = v24;
    if ( !v25 )
      goto LABEL_33;
  }
  if ( v4 >= 0 )
  {
    v26 = *(v25 + 0xE);
    v27 = v4 - v26;
    if ( v4 < v26 )
    {
      v28 = *(v25 + 0x10);
      if ( v28 == 0xFFFFFFFF )
      {
        v29 = *(v25 + 0x18);
        v30 = *(v29 + 8) + 8 * v27;
        result = *v29;
        v2 = *(result + v30);
        if ( !v2 )
          return result;
      }
      else
      {
        v2 = 0x20i64 * (v4 + v28) + *v25 + *(*v25 + 0x5Ci64) + 0x90;
      }
    }
  }
LABEL_33:
  LODWORD(v62) = 0xFFFAFAFF;
  getE3dcolor(v2, &v60, "fontColorFriend", &v62);
  *(a1[0xC7] + 0x1558i64) = v60;
  LODWORD(v62) = 0xFFFFFAFA;
  getE3dcolor(v2, &v60, "fontColorEnemy", &v62);
  *(a1[0xC7] + 0x1554i64) = v60;
  LODWORD(v62) = 0xDCB4B4B4;
  getE3dcolor(v2, &v60, "fontColorUseless", &v62);
  *(a1[0xC7] + 0x155Ci64) = v60;
  LODWORD(v62) = 0xFFF0F5F0;
  getE3dcolor(v2, &v60, "fontColorTeam", &v62);
  *(a1[0xC7] + 0x1560i64) = v60;
  LODWORD(v62) = 0xFFFAFAF0;
  getE3dcolor(v2, &v60, "fontColorOwnPlayer", &v62);
  *(a1[0xC7] + 0x1564i64) = v60;
  LODWORD(v62) = 0x82001482;
  getE3dcolor(v2, &v60, "fontFxColorFriend", &v62);
  *(a1[0xC7] + 0x1570i64) = v60;
  LODWORD(v62) = 0x876E0D00;
  getE3dcolor(v2, &v60, "fontFxColorEnemy", &v62);
  *(a1[0xC7] + 0x156Ci64) = v60;
  LODWORD(v62) = 0xC8000000;
  getE3dcolor(v2, &v60, "fontFxColorUseless", &v62);
  *(a1[0xC7] + 0x1574i64) = v60;
  LODWORD(v62) = 0x82006400;
  getE3dcolor(v2, &v60, "fontFxColorTeam", &v62);
  *(a1[0xC7] + 0x1578i64) = v60;
  LODWORD(v62) = 0xC8828200;
  getE3dcolor(v2, &v60, "fontFxColorOwnPlayer", &v62);
  *(a1[0xC7] + 0x157Ci64) = v60;
  LODWORD(v62) = 0x40FF0000;
  getE3dcolor(v2, &v60, "objectivesEnemyBlinkColor", &v62);
  *(a1[0xC7] + 0x154Ci64) = v60;
  LODWORD(v62) = 0x80808080;
  getE3dcolor(v2, &v60, "objectivesBlinkColor", &v62);
  *(a1[0xC7] + 0x1544i64) = v60;
  LODWORD(v62) = 0x32323200;
  getE3dcolor(v2, &v60, "objectivesEnemyBlinkFxColor", &v62);
  *(a1[0xC7] + 0x1550i64) = v60;
  LODWORD(v62) = 0x80808080;
  getE3dcolor(v2, &v60, "objectivesBlinkFxColor", &v62);
  *(a1[0xC7] + 0x1548i64) = v60;
  LODWORD(v62) = 0x2D;
  *(a1[0xC7] + 0x1444i64) = data::set_int(v2, "fontFxScale", &v62);
  LODWORD(v62) = 0x3F333333;
  v32 = data::set_real(v2, "uselessFontFxOpacity", &v62);
  *(a1[0xC7] + 0x1448i64) = LODWORD(v32);
  LODWORD(v62) = 0x3C;
  *(a1[0xC7] + 0x144Ci64) = data::set_int(v2, "notVisibleColorAlpha", &v62);
  LODWORD(v62) = 0x3E4CCCCD;
  v33 = data::set_real(v2, "notVisibleK", &v62);
  *(a1[0xC7] + 0x1450i64) = LODWORD(v33);
  LODWORD(v62) = 0x3F000000;
  v34 = data::set_real(v2, "notVisibleTextMultiplier", &v62);
  *(a1[0xC7] + 0x1454i64) = LODWORD(v34);
  sub_A4F500(a1[0xC3], a1[0xC7] + 0x1558i64, 0i64);
  sub_A4F500(a1[0xC3], a1[0xC7] + 0x1570i64, 0i64);
  sub_A4F500(a1[0xC3], a1[0xC7] + 0x1554i64, 2i64);
  sub_A4F500(a1[0xC3], a1[0xC7] + 0x156Ci64, 2i64);
  sub_A4F500(a1[0xC3], a1[0xC7] + 0x1560i64, 1i64);
  result = sub_A4F500(a1[0xC3], a1[0xC7] + 0x1578i64, 1i64);
  if ( !a1[0x3CE] )
    return result;
  v35 = a1 + 0x3CE;
  LODWORD(v62) = 0xFF00FF00;
  getE3dcolor(v2, &v60, "helicopterCrosshairColor", &v62);
  *(*v35 + 8i64) = v60;
  LODWORD(v62) = 0xFF00FF00;
  getE3dcolor(v2, &v60, "helicopterHudColor", &v62);
  *(*v35 + 0xCi64) = v60;
  LODWORD(v62) = 0xFF00FF00;
  getE3dcolor(v2, &v60, "helicopterHudParamColor", &v62);
  *(*v35 + 0x10i64) = v60;
  LODWORD(v62) = 0xFF00FF00;
  getE3dcolor(v2, &v60, "aircraftHudColor", &v62);
  *(*v35 + 0x14i64) = v60;
  LODWORD(v62) = 0xFFFFFFFF;
  getE3dcolor(v2, &v60, "aircraftHudParamColor", &v62);
  *(*v35 + 0x18i64) = v60;
  LODWORD(v62) = 0xFF0AFF0A;
  getE3dcolor(v2, &v60, "targetingPodHudColor", &v62);
  *(*v35 + 0x20i64) = v60;
  LODWORD(v62) = 0xFF00FF00;
  getE3dcolor(v2, &v60, "arbiterHudColor", &v62);
  *(*v35 + 0x1Ci64) = v60;
  LODWORD(v62) = 0xFFFFFF00;
  getE3dcolor(v2, &v60, "helicopterHudAlertColorLow", &v62);
  *(*v35 + 0x24i64) = v60;
  LODWORD(v62) = 0xFFFF8000;
  getE3dcolor(v2, &v60, "helicopterHudAlertColorMedium", &v62);
  *(*v35 + 0x28i64) = v60;
  LODWORD(v62) = 0xFFFF0000;
  getE3dcolor(v2, &v60, "helicopterHudAlertColorHigh", &v62);
  *(*v35 + 0x2Ci64) = v60;
  LODWORD(v62) = 0xFFFFFF00;
  getE3dcolor(v2, &v60, "helicopterHudAlertColorLow", &v62);
  *(*v35 + 0x30i64) = v60;
  LODWORD(v62) = 0xFFFF8000;
  getE3dcolor(v2, &v60, "helicopterHudAlertColorMedium", &v62);
  *(*v35 + 0x34i64) = v60;
  LODWORD(v62) = 0xFFFF0000;
  getE3dcolor(v2, &v60, "helicopterHudAlertColorHigh", &v62);
  *(*v35 + 0x38i64) = v60;
  LODWORD(v62) = 0xF047E827;
  getE3dcolor(v2, &v60, "helicopterMfdColor", &v62);
  *(*v35 + 0x3Ci64) = v60;
  LODWORD(v62) = 0x42F00000;
  v37 = data::set_real(v2, "helicopterWarningOverheatTimeToDie", &v62);
  *(*v35 + 0x40i64) = LODWORD(v37);
  *(*v35 + 0x48i64) = 0;
  while ( 1 )
  {
    v39 = *(*v35 + 0x48i64);
    v62 = 0i64;
    v64 = 0i64;
    v61 = v39;
    v60 = 2;
    v63 = off_4B678C8;
    ctor_vprintf(&v62, v36, "helicopterWarningOverheatFrequency%d", &v60, 1);
    v40 = v62;
    v41 = v62;
    if ( !v64 )
      v41 = &szFile;
    v42 = sub_145DD00(v2, v41);
    v43 = *(v2 + 0x14);
    v44 = *(v2 + 0xC);
    v45 = v44 == 0 || v42 < 0;
    v46 = 0xFFFFFFFF;
    if ( v43 != 0xFFFFFFFFi64 )
    {
      if ( !v45 )
      {
        v47 = *v2 + v43;
        v48 = (v47 + 0x90);
        v49 = v47 + 8 * v44 + 0x90;
        v50 = 0;
        while ( (*v48 & 0xFFFFFF) != v42 )
        {
          v48 += 2;
          ++v50;
          if ( v48 >= v49 )
            goto LABEL_51;
        }
        v46 = v50;
      }
LABEL_51:
      if ( !v40 )
        goto LABEL_53;
LABEL_52:
      (*(*v63 + 0x40i64))(v63, v40);
      goto LABEL_53;
    }
    if ( v45 )
      goto LABEL_51;
    v51 = **(v2 + 0x18);
    v52 = &v51[2 * v44];
    v53 = 0;
    while ( (*v51 & 0xFFFFFF) != v42 )
    {
      v51 += 2;
      ++v53;
      if ( v51 >= v52 )
        goto LABEL_51;
    }
    v46 = v53;
    if ( v40 )
      goto LABEL_52;
LABEL_53:
    v36 = *v35;
    v54 = *(*v35 + 0x48i64);
    if ( (v46 & 0x80000000) != 0 )
      break;
    if ( v54 > 3 )
      goto LABEL_66;
    v55 = *(v2 + 0xC);
    if ( v46 >= v55 )
    {
LABEL_35:
      v38 = 0i64;
      goto LABEL_36;
    }
    v56 = *(v2 + 0x14);
    if ( v56 == 0xFFFFFFFFi64 )
    {
      v58 = **(v2 + 0x18);
      if ( *(v58 + 8i64 * v46 + 3) << 0x18 != 0x4000000 )
        goto LABEL_35;
      v59 = *(v58 + 8i64 * v46 + 4) + 8 * v55;
    }
    else
    {
      v57 = *v2 + v56 + 0x90;
      if ( *(v57 + 8i64 * v46 + 3) << 0x18 != 0x4000000 )
        goto LABEL_35;
      v58 = *v2 + 0x90i64;
      v59 = *(v57 + 8i64 * v46 + 4);
    }
    v38 = *(v58 + v59);
LABEL_36:
    *(v36 + 0x48) = v54 + 1;
    *(v36 + 8 * v54 + 0x4C) = v38;
  }
  if ( !*(*v35 + 0x48i64) )
  {
    *(v36 + 0x48) = 4;
    *(*v35 + 0x4Ci64) = 0x4080000042700000i64;
    *(*v35 + 0x54i64) = 0x4000000042F00000i64;
    *(*v35 + 0x5Ci64) = 0x3F80000043960000i64;
    *(*v35 + 0x64i64) = 0x44160000i64;
    v36 = *v35;
  }
LABEL_66:
  sub_A4F500(a1[0xC3], v36 + 8, 7i64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0xCi64, 8i64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x10i64, 9i64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x14i64, 0xBi64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x18i64, 0xCi64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x1Ci64, 0x13i64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x3Ci64, 0xAi64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x24i64, 0xDi64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x28i64, 0xEi64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x2Ci64, 0xFi64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x30i64, 0x10i64);
  sub_A4F500(a1[0xC3], a1[0x3CE] + 0x34i64, 0x11i64);
  return sub_A4F500(a1[0xC3], a1[0x3CE] + 0x38i64, 0x12i64);
}
