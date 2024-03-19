char __fastcall game_mp_change_score(__int64 a1, __int64 a2)
{
  Unit_ = "Both";
  v4 = data::get_str(a2, "team", &Unit_);
  v6 = &off_4A71AA0;
  if ( v4 )
  {
    v7 = off_4A71AA0;
    if ( off_4A71AA0 )
    {
      v8 = v4;
      v6 = &off_4A71AA0;
      while ( strcmp(v7, v8) )
      {
        v7 = v6[2];
        v6 += 2;
        if ( !v7 )
        {
          v6 = &off_4A71AA0;
          break;
        }
      }
    }
  }
  v9 = *(v6 + 2);
  if ( *(a2 + 0x14) == 0xFFFFFFFF )
    v10 = sub_14604F0(a2, "valueSystem", v5);
  else
    v10 = sub_14606A0(a2, "valueSystem", v5);
  v11 = v10;
  v12 = 0;
  if ( v10 )
  {
    if ( !strcmp("percentage", v10) )
    {
      v13 = &off_44CFC00;
    }
    else
    {
      if ( strcmp("amount", v11) )
        goto LABEL_16;
      v13 = &off_44CFC10;
    }
    v12 = *(v13 + 2);
  }
LABEL_16:
  if ( *(a2 + 0x14) == 0xFFFFFFFF )
    v14 = sub_1460B40(a2, "value");
  else
    v14 = sub_1460C70(a2, "value");
  v98 = v14;
  v103 = a1;
  v15 = *a2;
  v16 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v17 = data::get_name_id("var", 3ui64);
    v18 = *(v15 + 0x50);
    if ( v18 )
    {
      v19 = *(v18 + 0x20);
      if ( !*(v15 + 0x20) )
        goto LABEL_26;
    }
    else
    {
      v19 = 0;
      if ( !*(v15 + 0x20) )
        goto LABEL_26;
    }
    v20 = data::get_name_id(v15, "var", 3ui64, v17);
    if ( v20 >= 0 )
    {
      v21 = v19 + v20;
LABEL_28:
      v16 = v21;
      goto LABEL_29;
    }
LABEL_26:
    if ( !v19 )
      goto LABEL_29;
    v21 = data::get_name_id(*(v15 + 0x50), "var", 3ui64, v17);
    goto LABEL_28;
  }
LABEL_29:
  v22 = *(a2 + 0x14);
  v23 = *(a2 + 0xC);
  v24 = v23 == 0 || v16 < 0;
  v99 = v9;
  if ( v22 == 0xFFFFFFFFi64 )
  {
    if ( !v24 )
    {
      v26 = **(a2 + 0x18);
      v29 = &v26[8 * v23];
      v28 = v26;
      while ( (*v28 & 0xFFFFFF) != v16 )
      {
        v28 += 8;
        if ( v28 >= v29 )
          goto LABEL_39;
      }
      goto LABEL_84;
    }
LABEL_39:
    LOBYTE(Unit_) = 1;
    v30 = data::get_bool(a2, "ignoreSingleMissions", &Unit_);
    goto LABEL_40;
  }
  if ( v24 )
    goto LABEL_39;
  v25 = *a2 + v22;
  v26 = (v25 + 0x90);
  v27 = v25 + 8 * v23 + 0x90;
  v28 = (v25 + 0x90);
  while ( (*v28 & 0xFFFFFF) != v16 )
  {
    v28 += 8;
    if ( v28 >= v27 )
      goto LABEL_39;
  }
LABEL_84:
  v55 = (v28 - v26) >> 3;
  LOBYTE(Unit_) = 1;
  v30 = data::get_bool(a2, "ignoreSingleMissions", &Unit_);
  if ( (v55 & 0x80000000) == 0i64 )
  {
    if ( *(a2 + 0xC) > v55 && (v56 = sub_1459970(a2, v55)) != 0i64 )
    {
      v57 = v56;
      if ( *v56 == 0x40 && *(v103 + 0x50) )
      {
        v58 = *(v103 + 0x40);
        v59 = 0x20i64 * *(v103 + 0x50);
        v60 = 0i64;
        while ( strcmp(*(v58 + v60), v57 + 1) )
        {
          v60 += 0x20i64;
          if ( v59 == v60 )
            goto LABEL_94;
        }
        if ( (*(v58 + v60 + 8) & 0xF) == 1 )
          v57 = *(v58 + v60 + 0x10);
      }
    }
    else
    {
      v57 = 0i64;
    }
LABEL_94:
    if ( *(v103 + 0x50) )
    {
      v61 = *(v103 + 0x40);
      v62 = 0x20i64 * *(v103 + 0x50);
      v63 = 0i64;
      while ( strcmp(*(v61 + v63), v57) )
      {
        v63 += 0x20i64;
        if ( v62 == v63 )
          goto LABEL_40;
      }
      if ( (*(v61 + v63 + 8) & 0xF) == 2 )
        v98 = *(v61 + v63 + 0x10);
    }
  }
LABEL_40:
  v31 = dword_4B1C814;
  v32 = v98;
  if ( v12 != 1 )
    v32 = v98 * dword_4B1C390 / 0x64;
  v101 = dword_4B1C814;
  LODWORD(Unit_) = 2;
  logmessage_fmt(0x47495254u, "[DEBUG] gameMPChangeScore gt:%d", &Unit_, 1);
  if ( (v31 & 0xC0) != 0x80 )
  {
    if ( (v31 & 0xC0) == 0x40 )
    {
      if ( (v99 & 1) != 0 )
      {
        v33 = *(game + 0x420);
        LOWORD(Unit_) = v32 + *(v33 + 0x5F0);
        if ( v32 )
        {
          on_reflection_var_changed(v33 + 0x5D0, v33 + 0x580, &Unit_);
          *(v33 + 0x5F0) = Unit_;
        }
      }
      if ( (v99 & 2) != 0 )
      {
        v34 = *(game + 0x420);
        LOWORD(Unit_) = v32 + *(v34 + 0x730);
        if ( v32 )
        {
          on_reflection_var_changed(v34 + 0x710, v34 + 0x6C0, &Unit_);
          *(v34 + 0x730) = Unit_;
        }
      }
    }
    if ( (v31 & 0x8000000) == 0 )
      return 1;
    goto LABEL_51;
  }
  if ( ((g_net == 0) & v30) == 0 )
  {
    v44 = v103;
    if ( *(v103 + 0x50) )
    {
      v45 = *(v103 + 0x40);
      v46 = 0x20i64 * *(v103 + 0x50);
      v47 = 0i64;
      while ( strcmp(*(v45 + v47), "mpTi1") )
      {
        v47 += 0x20i64;
        if ( v46 == v47 )
          goto LABEL_69;
      }
    }
    else
    {
LABEL_69:
      if ( qword_4B12198
        && qword_4B12198(
             0i64,
             "..\\..\\skyquake\\prog\\mission\\actions.cpp",
             0x1515i64,
             "gameMPChangeScore",
             "dm->vars.lup(\"mpTi1\")",
             0i64,
             0i64,
             0) )
      {
        __debugbreak();
      }
    }
    if ( *(v44 + 0x50) )
    {
      v48 = *(v44 + 0x40);
      v49 = 0x20i64 * *(v44 + 0x50);
      v50 = 0i64;
      while ( strcmp(*(v48 + v50), "mpTi2") )
      {
        v50 += 0x20i64;
        if ( v49 == v50 )
          goto LABEL_76;
      }
    }
    else
    {
LABEL_76:
      if ( qword_4B12198 )
      {
        LODWORD(v97) = 0;
        if ( qword_4B12198(
               0i64,
               "..\\..\\skyquake\\prog\\mission\\actions.cpp",
               0x1516i64,
               "gameMPChangeScore",
               "dm->vars.lup(\"mpTi2\")",
               0i64,
               0i64,
               v97) )
          __debugbreak();
      }
    }
    v51 = *(v44 + 0x50);
    if ( *(v44 + 0x50) )
    {
      v52 = *(v103 + 0x40);
      v53 = 0x20 * v51;
      v54 = 0i64;
      while ( strcmp(v52[v54 / 8], "mpTi1") )
      {
        v54 += 0x20i64;
        if ( v53 == v54 )
          return 1;
      }
      v64 = 0i64;
      while ( strcmp(v52[v64 / 8], "mpTi2") )
      {
        v64 += 0x20i64;
        if ( v53 == v64 )
          return 1;
      }
      v65 = v52 + 1;
      v66 = v51;
      while ( strcmp(v65[0xFFFFFFFF], "mpTi1") )
      {
        v65 += 4;
        if ( !--v66 )
        {
          v65 = 0i64;
          break;
        }
      }
      v67 = v52;
      v68 = 0i64;
      while ( strcmp(*v67, "mpTi2") )
      {
        ++v68;
        v67 += 4;
        if ( v51 == v68 )
        {
          v69 = 0i64;
          goto LABEL_114;
        }
      }
      v69 = &v52[4 * v68 + 1];
LABEL_114:
      if ( (v99 & 1) != 0 )
      {
        v70 = *(v65 + 2);
        v71 = 0;
        if ( v70 + v32 > 0 )
          v71 = v70 + v32;
        *(v65 + 2) = v71;
        dword_4B4475C += v70 - v71;
      }
      if ( (v99 & 2) != 0 )
      {
        v72 = *(v69 + 8);
        v73 = v72 + v32;
        v74 = 0;
        if ( v73 > 0 )
          v74 = v73;
        *(v69 + 8) = v74;
        dword_4B44760 += v72 - v74;
      }
      sub_C75340(*(game + 0x420), *(v65 + 2), *(v69 + 8));
      if ( (v31 & 0x8000000) != 0 )
      {
LABEL_51:
        if ( v98 >= 0 )
        {
          v35 = v103;
          v36 = (v103 + 0x40);
          v37 = *(v103 + 0x50);
          if ( *(v103 + 0x50) )
          {
            v38 = (*v36 + 8i64);
            while ( strcmp(*(v38 + 0xFFFFFFFF), "mpPlayerIdGoal") )
            {
              v38 += 8;
              if ( !--v37 )
                goto LABEL_56;
            }
          }
          else
          {
LABEL_56:
            v38 = sub_CCDE30(v36, "mpPlayerIdGoal");
            *v38 = *v38 & 0xFFFFFFF0 | 2;
          }
          v38[2] = 0xFFFFFFFF;
          v39 = *(v35 + 0x50);
          if ( *(v35 + 0x50) )
          {
            v40 = (*v36 + 8i64);
            while ( strcmp(*(v40 + 0xFFFFFFFF), "mpPlayerIdAssist") )
            {
              v40 += 8;
              if ( !--v39 )
                goto LABEL_61;
            }
          }
          else
          {
LABEL_61:
            v40 = sub_CCDE30(v36, "mpPlayerIdAssist");
            *v40 = *v40 & 0xFFFFFFF0 | 2;
          }
          v40[2] = 0xFFFFFFFF;
          Unit_ = 0i64;
          v101 = off_4B678C0;
          v102 = 0i64;
          if ( *(game + 0x360) )
          {
            UnitList = *(game + 0x350);
            UnitCount = 8i64 * *(game + 0x360);
            index = 0i64;
            do
            {
              Unit = *(UnitList + index);
              if ( Unit
                && *(Unit + 0x10B8)             // Player Info
                && (v99 & (*(*(Unit + 0x50) + 0x30i64))(Unit + 0x50)) != 0
                && *(Unit + 0x1404) > *(Unit + 0x17D0) )
              {
                v76 = v102;
                if ( HIDWORD(v102) == v102 )
                {
                  if ( HIDWORD(v102) )
                  {
                    if ( HIDWORD(v102) > 0x1FF )
                      v75 = ((HIDWORD(v102) + 1) >> 1) + HIDWORD(v102);
                    else
                      v75 = 2i64 * HIDWORD(v102);
                  }
                  else
                  {
                    v75 = 2i64;
                  }
                  sub_FC0D0(&Unit_, v75);
                  v76 = v102;
                }
                LODWORD(v102) = v76 + 1;
                *&Unit_[8 * v76] = Unit;
              }
              index += 8i64;
            }
            while ( UnitCount != index );
            v78 = v102;
            if ( v102 )
            {
              if ( v102 != 1 )
              {
                v79 = Unit_;
                v80 = *Unit_;
                v81 = *(Unit_ + 1);
                *Unit_ = v81;
                *&v79[8 * (*(v81 + 0x1404) <= *(v80 + 0x1404))] = v80;
                if ( v78 <= 2 )
                {
                  v84 = *v79;
                }
                else
                {
                  v82 = &v79[8 * v78];
                  v83 = v79 + 0x10;
                  v84 = *v79;
                  do
                  {
                    v85 = *v83;
                    if ( *(*v83 + 0x1404i64) > *(v84 + 0x1404) )
                    {
                      *v83 = v84;
                      v86 = *(v79 + 1);
                      *v79 = v86;
                      *&v79[8 * (*(v86 + 0x1404) <= *(v85 + 0x1404))] = v85;
                      v84 = *v79;
                    }
                    v83 += 8;
                  }
                  while ( v83 < v82 );
                }
                v87 = *(v79 + 1);
                *(v79 + 1) = v84;
                *v79 = v87;
                v88 = *(*(Unit_ + 1) + 0x10B8i64);
                *(v88 + 0xBAA) += v98;
                on_reflection_var_changed(v88 + 0xBB0, v88, v88 + 0xBD0);
                v89 = *(v88 + 8);
                v90 = *(v103 + 0x50);
                if ( *(v103 + 0x50) )
                {
                  v91 = (*v36 + 8i64);
                  while ( strcmp(*(v91 + 0xFFFFFFFF), "mpPlayerIdAssist") )
                  {
                    v91 += 8;
                    if ( !--v90 )
                      goto LABEL_151;
                  }
                }
                else
                {
LABEL_151:
                  v91 = sub_CCDE30(v36, "mpPlayerIdAssist");
                  *v91 = *v91 & 0xFFFFFFF0 | 2;
                }
                v91[2] = v89;
                sub_645080(*(v88 + 0xA8));
              }
              v92 = *(*Unit_ + 0x10B8i64);
              *(v92 + 0xBA8) += v98;
              on_reflection_var_changed(v92 + 0xBB0, v92, v92 + 0xBD0);
              v93 = *(v92 + 8);
              v94 = *(v103 + 0x50);
              if ( *(v103 + 0x50) )
              {
                v95 = (*v36 + 8i64);
                while ( strcmp(*(v95 + 0xFFFFFFFF), "mpPlayerIdGoal") )
                {
                  v95 += 8;
                  if ( !--v94 )
                    goto LABEL_157;
                }
              }
              else
              {
LABEL_157:
                v95 = sub_CCDE30(v36, "mpPlayerIdGoal");
                *v95 = *v95 & 0xFFFFFFF0 | 2;
              }
              v95[2] = v93;
              sub_644CA0(*(v92 + 0xA8));
            }
          }
          if ( Unit_ )
            (*(*v101 + 0x40i64))(v101);
        }
      }
    }
  }
  return 1;
}
