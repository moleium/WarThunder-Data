__int64 __fastcall LaserGuidanceDesc::load_from_blk(__int64 a1, __int64 a2)
{
  v157 = 0;
  *(a1 + 8) = sub_145B6B0(a2, "warmUpTime", &v157);
  v157 = 0x4EFFFEAB;
  v4 = sub_145B6B0(a2, "workTime", &v157);
  *(a1 + 0x10) = v4;
  v157 = LODWORD(v4);bbbbbbb
  *(a1 + 0xC) = sub_145B6B0(a2, "acquisitionTime", &v157);
  LOBYTE(v157) = 0;
  *(a1 + 0x14) = data::get_bool(a2, "permanentlyActivated", &v157);
  LOBYTE(v157) = 0;
  *(a1 + 0x15) = data::get_bool(a2, "uncageBeforeLaunch", &v157);
  LOBYTE(v157) = 0;
  *(a1 + 0x16) = data::get_bool(a2, "inertialNavigation", &v157);
  v158 = a1;
  sub_3A5B8B0(a2, a1 + 0x18);
  v5 = *a2;
  v6 = 0xFFFFFFFF;
  if ( *a2 )
  {
    name_id = data::get_name_id("irSeeker", 8ui64);
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
    v10 = sub_128A70(v5, "irSeeker", 8ui64, name_id);
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
    v11 = sub_128A70(*(v5 + 0x50), "irSeeker", 8ui64, name_id);
    goto LABEL_10;
  }
LABEL_11:
  v12 = *(a2 + 0x10);
  if ( v12 == 0xFFFFFFFF )
  {
    v19 = *(a2 + 0xE);
    v14 = 0i64;
    if ( *(a2 + 0xE) )
    {
      v20 = v6 + 1;
      v21 = *(a2 + 0x18);
      v22 = *v21;
      v23 = *(v21 + 2) - 8 * v19;
      v24 = 0;
      while ( (*(*(v22 + v23) + 8i64) & 0x3FFFFFFF) != v20 )
      {
        ++v24;
        v23 += 8i64;
        if ( v19 == v24 )
          goto LABEL_28;
      }
      if ( v24 >= v19 )
        v14 = 0i64;
      else
        v14 = *(v22 + v23);
    }
  }
  else
  {
    v13 = *(a2 + 0xE);
    v14 = 0i64;
    if ( v12 < (v12 + v13) )
    {
      v15 = v6 + 1;
      v16 = *(*a2 + 0x5Ci64) + *a2 + 0x90i64;
      v17 = 0;
      while ( 1 )
      {
        v18 = 0x20i64 * (v12 + v17);
        if ( (*(v16 + v18 + 8) & 0x3FFFFFFF) == v15 )
          break;
        if ( v13 == ++v17 )
          goto LABEL_28;
      }
      v25 = (v18 + v16);
      v14 = 0i64;
      if ( v17 < v13 )
        v14 = v25;
    }
  }
LABEL_28:
  if ( !v14 )
    v14 = &data::get_block_by_name;
  v26 = *a2;
  v27 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v28 = data::get_name_id("opticalSeeker", 0xDui64);
    v29 = *(v26 + 0x50);
    if ( v29 )
    {
      v30 = *(v29 + 0x20);
      if ( !*(v26 + 0x20) )
        goto LABEL_37;
    }
    else
    {
      v30 = 0;
      if ( !*(v26 + 0x20) )
        goto LABEL_37;
    }
    v31 = sub_128A70(v26, "opticalSeeker", 0xDui64, v28);
    if ( v31 >= 0 )
    {
      v32 = v30 + v31;
LABEL_39:
      v27 = v32;
      goto LABEL_40;
    }
LABEL_37:
    if ( !v30 )
      goto LABEL_40;
    v32 = sub_128A70(*(v26 + 0x50), "opticalSeeker", 0xDui64, v28);
    goto LABEL_39;
  }
LABEL_40:
  v33 = *(a2 + 0x10);
  if ( v33 != 0xFFFFFFFF )
  {
    v34 = *(a2 + 0xE);
    v35 = 0i64;
    if ( v33 < (v33 + v34) )
    {
      v36 = v27 + 1;
      v37 = *a2 + *(*a2 + 0x5Ci64) + 0x90i64;
      v38 = 0;
      while ( 1 )
      {
        v39 = 0x20i64 * (v33 + v38);
        if ( (*(v37 + v39 + 8) & 0x3FFFFFFF) == v36 )
          break;
        if ( v34 == ++v38 )
          goto LABEL_53;
      }
      v46 = v39 + v37;
      v35 = 0i64;
      if ( v38 < v34 )
        v35 = v46;
    }
    goto LABEL_53;
  }
  v40 = *(a2 + 0xE);
  v35 = 0i64;
  if ( !*(a2 + 0xE) )
  {
LABEL_53:
    v47 = v158;
    goto LABEL_54;
  }
  v41 = v27 + 1;
  v42 = *(a2 + 0x18);
  v43 = *v42;
  v44 = *(v42 + 2) - 8 * v40;
  v45 = 0;
  while ( (*(*(v43 + v44) + 8i64) & 0x3FFFFFFF) != v41 )
  {
    ++v45;
    v44 += 8i64;
    if ( v40 == v45 )
      goto LABEL_53;
  }
  v47 = v158;
  if ( v45 >= v40 )
    v35 = 0i64;
  else
    v35 = *(v43 + v44);
LABEL_54:
  if ( v35 )
    v14 = v35;
  sub_1C91310(v158 + 0x40, v14);
  v48 = *a2;
  v49 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v50 = data::get_name_id("inertialGuidance", 0x10ui64);
    v51 = *(v48 + 0x50);
    if ( v51 )
    {
      v52 = *(v51 + 0x20);
      if ( !*(v48 + 0x20) )
        goto LABEL_63;
    }
    else
    {
      v52 = 0;
      if ( !*(v48 + 0x20) )
        goto LABEL_63;
    }
    v53 = sub_128A70(v48, "inertialGuidance", 0x10ui64, v50);
    if ( v53 >= 0 )
    {
      v54 = v52 + v53;
LABEL_65:
      v49 = v54;
      goto LABEL_66;
    }
LABEL_63:
    if ( !v52 )
      goto LABEL_66;
    v54 = sub_128A70(*(v48 + 0x50), "inertialGuidance", 0x10ui64, v50);
    goto LABEL_65;
  }
LABEL_66:
  v55 = *(a2 + 0x10);
  if ( v55 == 0xFFFFFFFF )
  {
    v62 = *(a2 + 0xE);
    v57 = 0i64;
    if ( *(a2 + 0xE) )
    {
      v63 = v49 + 1;
      v64 = *(a2 + 0x18);
      v65 = *v64;
      v66 = *(v64 + 2) - 8 * v62;
      v67 = 0;
      while ( (*(*(v65 + v66) + 8i64) & 0x3FFFFFFF) != v63 )
      {
        ++v67;
        v66 += 8i64;
        if ( v62 == v67 )
          goto LABEL_86;
      }
      if ( v67 >= v62 )
        v57 = 0i64;
      else
        v57 = *(v65 + v66);
    }
  }
  else
  {
    v56 = *(a2 + 0xE);
    v57 = 0i64;
    if ( v55 < (v55 + v56) )
    {
      v58 = v49 + 1;
      v59 = *(*a2 + 0x5Ci64) + *a2 + 0x90i64;
      v60 = 0;
      while ( 1 )
      {
        v61 = 0x20i64 * (v55 + v60);
        if ( (*(v59 + v61 + 8) & 0x3FFFFFFF) == v58 )
          break;
        if ( v56 == ++v60 )
          goto LABEL_86;
      }
      v68 = (v61 + v59);
      v57 = 0i64;
      if ( v60 < v56 )
        v57 = v68;
    }
  }
LABEL_86:
  if ( !v57 )
    v57 = a2;
  v157 = 0x3F000000;
  *(v47 + 0xB4) = sub_145B6B0(v57, "inertialNavigationDriftSpeed", &v157);
  LOBYTE(v157) = 0;
  *(v47 + 0xB8) = data::get_bool(v57, "datalink", &v157);
  LOBYTE(v157) = 0;
  *(v47 + 0xB9) = data::get_bool(v57, "reconnectDatalink", &v157);
  v69 = *a2;
  v70 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v71 = data::get_name_id("orientationAutopilot", 0x14ui64);
    v72 = *(v69 + 0x50);
    if ( v72 )
    {
      v73 = *(v72 + 0x20);
      if ( !*(v69 + 0x20) )
        goto LABEL_95;
    }
    else
    {
      v73 = 0;
      if ( !*(v69 + 0x20) )
        goto LABEL_95;
    }
    v74 = sub_128A70(v69, "orientationAutopilot", 0x14ui64, v71);
    if ( v74 >= 0 )
    {
      v75 = v73 + v74;
LABEL_97:
      v70 = v75;
      goto LABEL_98;
    }
LABEL_95:
    if ( !v73 )
      goto LABEL_98;
    v75 = sub_128A70(*(v69 + 0x50), "orientationAutopilot", 0x14ui64, v71);
    goto LABEL_97;
  }
LABEL_98:
  v76 = *(a2 + 0x10);
  if ( v76 == 0xFFFFFFFF )
  {
    v83 = *(a2 + 0xE);
    v78 = 0i64;
    if ( *(a2 + 0xE) )
    {
      v84 = v70 + 1;
      v85 = *(a2 + 0x18);
      v86 = *v85;
      v87 = *(v85 + 2) - 8 * v83;
      v88 = 0;
      while ( (*(*(v86 + v87) + 8i64) & 0x3FFFFFFF) != v84 )
      {
        ++v88;
        v87 += 8i64;
        if ( v83 == v88 )
          goto LABEL_115;
      }
      if ( v88 >= v83 )
        v78 = 0i64;
      else
        v78 = *(v86 + v87);
    }
  }
  else
  {
    v77 = *(a2 + 0xE);
    v78 = 0i64;
    if ( v76 < (v76 + v77) )
    {
      v79 = v70 + 1;
      v80 = *a2 + *(*a2 + 0x5Ci64) + 0x90i64;
      v81 = 0;
      while ( 1 )
      {
        v82 = 0x20i64 * (v76 + v81);
        if ( (*(v80 + v82 + 8) & 0x3FFFFFFF) == v79 )
          break;
        if ( v77 == ++v81 )
          goto LABEL_115;
      }
      v89 = (v82 + v80);
      v78 = 0i64;
      if ( v81 < v77 )
        v78 = v89;
    }
  }
LABEL_115:
  if ( !v78 )
    v78 = &data::get_block_by_name;
  sub_288B9B0(v47 + 0xBC, v78);
  v90 = *a2;
  v91 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v92 = data::get_name_id("propNavGuidance", 0xFui64);
    v93 = *(v90 + 0x50);
    if ( v93 )
    {
      v94 = *(v93 + 0x20);
      if ( !*(v90 + 0x20) )
        goto LABEL_124;
    }
    else
    {
      v94 = 0;
      if ( !*(v90 + 0x20) )
        goto LABEL_124;
    }
    v95 = sub_128A70(v90, "propNavGuidance", 0xFui64, v92);
    if ( v95 >= 0 )
    {
      v96 = v94 + v95;
LABEL_126:
      v91 = v96;
      goto LABEL_127;
    }
LABEL_124:
    if ( !v94 )
      goto LABEL_127;
    v96 = sub_128A70(*(v90 + 0x50), "propNavGuidance", 0xFui64, v92);
    goto LABEL_126;
  }
LABEL_127:
  v97 = *(a2 + 0x10);
  if ( v97 == 0xFFFFFFFF )
  {
    v104 = *(a2 + 0xE);
    v99 = 0i64;
    if ( *(a2 + 0xE) )
    {
      v105 = v91 + 1;
      v106 = *(a2 + 0x18);
      v107 = *v106;
      v108 = *(v106 + 2) - 8 * v104;
      v109 = 0;
      while ( (*(*(v107 + v108) + 8i64) & 0x3FFFFFFF) != v105 )
      {
        ++v109;
        v108 += 8i64;
        if ( v104 == v109 )
          goto LABEL_144;
      }
      if ( v109 >= v104 )
        v99 = 0i64;
      else
        v99 = *(v107 + v108);
    }
  }
  else
  {
    v98 = *(a2 + 0xE);
    v99 = 0i64;
    if ( v97 < (v97 + v98) )
    {
      v100 = v91 + 1;
      v101 = *(*a2 + 0x5Ci64) + *a2 + 0x90i64;
      v102 = 0;
      while ( 1 )
      {
        v103 = 0x20i64 * (v97 + v102);
        if ( (*(v101 + v103 + 8) & 0x3FFFFFFF) == v100 )
          break;
        if ( v98 == ++v102 )
          goto LABEL_144;
      }
      v110 = v103 + v101;
      v99 = 0i64;
      if ( v102 < v98 )
        v99 = v110;
    }
  }
LABEL_144:
  v111 = *a2;
  v112 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v113 = data::get_name_id(&qword_488F31F, 0x11ui64);
    v114 = *(v111 + 0x50);
    if ( v114 )
    {
      v115 = *(v114 + 0x20);
      if ( !*(v111 + 0x20) )
        goto LABEL_151;
    }
    else
    {
      v115 = 0;
      if ( !*(v111 + 0x20) )
        goto LABEL_151;
    }
    v116 = sub_128A70(v111, &qword_488F31F, 0x11ui64, v113);
    if ( v116 >= 0 )
    {
      v117 = v115 + v116;
LABEL_153:
      v112 = v117;
      goto LABEL_154;
    }
LABEL_151:
    if ( !v115 )
      goto LABEL_154;
    v117 = sub_128A70(*(v111 + 0x50), &qword_488F31F, 0x11ui64, v113);
    goto LABEL_153;
  }
LABEL_154:
  v118 = *(a2 + 0x10);
  if ( v118 == 0xFFFFFFFF )
  {
    v125 = *(a2 + 0xE);
    v120 = 0i64;
    if ( *(a2 + 0xE) )
    {
      v126 = v112 + 1;
      v127 = *(a2 + 0x18);
      v128 = *v127;
      v129 = *(v127 + 2) - 8 * v125;
      v130 = 0;
      while ( (*(*(v128 + v129) + 8i64) & 0x3FFFFFFF) != v126 )
      {
        ++v130;
        v129 += 8i64;
        if ( v125 == v130 )
          goto LABEL_171;
      }
      if ( v130 >= v125 )
        v120 = 0i64;
      else
        v120 = *(v128 + v129);
    }
  }
  else
  {
    v119 = *(a2 + 0xE);
    v120 = 0i64;
    if ( v118 < (v118 + v119) )
    {
      v121 = v112 + 1;
      v122 = *(*a2 + 0x5Ci64) + *a2 + 0x90i64;
      v123 = 0;
      while ( 1 )
      {
        v124 = 0x20i64 * (v118 + v123);
        if ( (*(v122 + v124 + 8) & 0x3FFFFFFF) == v121 )
          break;
        if ( v119 == ++v123 )
          goto LABEL_171;
      }
      v131 = v124 + v122;
      v120 = 0i64;
      if ( v123 < v119 )
        v120 = v131;
    }
  }
LABEL_171:
  v132 = *a2;
  v133 = 0xFFFFFFFF;
  if ( *a2 )
  {
    v134 = data::get_name_id("selfHomingAutopilot", 0x13ui64);
    v135 = *(v132 + 0x50);
    v136 = v99;
    if ( v135 )
    {
      v137 = *(v135 + 0x20);
      if ( !*(v132 + 0x20) )
      {
LABEL_178:
        v139 = v137 == 0;
        v99 = v136;
        if ( !v139 )
          v133 = sub_128A70(*(v132 + 0x50), "selfHomingAutopilot", 0x13ui64, v134);
        goto LABEL_180;
      }
    }
    else
    {
      v137 = 0;
      if ( !*(v132 + 0x20) )
        goto LABEL_178;
    }
    v138 = sub_128A70(v132, "selfHomingAutopilot", 0x13ui64, v134);
    if ( v138 >= 0 )
    {
      v133 = v137 + v138;
      v99 = v136;
      goto LABEL_180;
    }
    goto LABEL_178;
  }
LABEL_180:
  v140 = *(a2 + 0x10);
  if ( v140 == 0xFFFFFFFF )
  {
    v147 = *(a2 + 0xE);
    v142 = 0i64;
    if ( *(a2 + 0xE) )
    {
      v148 = v133 + 1;
      v149 = *(a2 + 0x18);
      v150 = *v149;
      v151 = *(v149 + 2) - 8 * v147;
      v152 = 0;
      while ( (*(*(v150 + v151) + 8i64) & 0x3FFFFFFF) != v148 )
      {
        ++v152;
        v151 += 8i64;
        if ( v147 == v152 )
          goto LABEL_197;
      }
      if ( v152 >= v147 )
        v142 = 0i64;
      else
        v142 = *(v150 + v151);
    }
  }
  else
  {
    v141 = *(a2 + 0xE);
    v142 = 0i64;
    if ( v140 < (v140 + v141) )
    {
      v143 = v133 + 1;
      v144 = *a2 + *(*a2 + 0x5Ci64) + 0x90i64;
      v145 = 0;
      while ( 1 )
      {
        v146 = 0x20i64 * (v140 + v145);
        if ( (*(v144 + v146 + 8) & 0x3FFFFFFF) == v143 )
          break;
        if ( v141 == ++v145 )
          goto LABEL_197;
      }
      v153 = v146 + v144;
      v142 = 0i64;
      if ( v145 < v141 )
        v142 = v153;
    }
  }
LABEL_197:
  v154 = &data::get_block_by_name;
  if ( v99 )
    v154 = v99;
  if ( v120 )
    v154 = v120;
  v155 = v47 + 0xF8;
  if ( v142 )
    v154 = v142;
  return sub_3A5D900(v155, v154);
}