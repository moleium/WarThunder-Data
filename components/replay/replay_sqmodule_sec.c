__int64(__fastcall **__fastcall replay_sqmodule_sec(__int64 a1))(void *Block)
{
  v2 = *(a1 + 0xB8);
  v111 = v2;
  v110 = &off_44A93B0;
  sq_newtable(v2);
  v3 = v2[6];
  v4 = v2[0xA] - 1i64;
  v112 = *(v3 + 0x10 * v4);
  v5 = v2;
  if ( (BYTE3(v112) & 8) != 0 )
  {
    v6 = sub_28B5100(v2[0x28] + 0x38, &v112, &v114, &v113, 1);
    ++*(v6 + 0x10);
    v5 = v111;
    v3 = v111[6];
    v4 = v111[0xA] - 1i64;
  }
  v5[0xA] = v4;
  v7 = 0x10 * v4;
  v8 = *(v3 + v7 + 8);
  v9 = (*(v3 + v7) & 0x8000000) == 0;
  *(v3 + v7) = 0i64;
  *(v3 + v7) = 0x1000001;
  if ( !v9 )
  {
    v9 = v8[1]-- == 1i64;
    if ( v9 )
      (*(*v8 + 8i64))(v8);
  }
  v10 = v110[1](&v110);
  v11 = *v10;
  v12 = *(v10 + 4);
  v13 = *(v10 + 8);
  v14 = v111;
  if ( (v11 & 0x8000000) != 0 )
    ++v13[1];
  v15 = v14[6];
  v16 = v14[0xA];
  v17 = v16 + 1;
  v16 *= 0x10i64;
  v14[0xA] = v17;
  v18 = *(v15 + v16);
  v19 = *(v15 + v16 + 8);
  *(v15 + v16) = v11;
  *(v15 + v16 + 4) = v12;
  *(v15 + v16 + 8) = v13;
  if ( (v11 & 0x8000000) != 0 )
    ++v13[1];
  if ( (v18 & 0x8000000) != 0 && (v9 = v19[1] == 1i64, --v19[1], v9) )
  {
    (*(*v19 + 8i64))(v19);
    if ( (v11 & 0x8000000) == 0 )
      goto LABEL_16;
  }
  else if ( (v11 & 0x8000000) == 0 )
  {
    goto LABEL_16;
  }
  v9 = v13[1]-- == 1i64;
  if ( v9 )
    (*(*v13 + 8i64))(v13);
LABEL_16:
  v20 = v111;
  v21 = sq_pushstring(*(v111[0x28] + 0x30i64), "get_time_speeds_list", 0xFFFFFFFFFFFFFFFFui64);
  ++v21[1];
  v22 = v20[6];
  v23 = v20[0xA];
  v20[0xA] = v23 + 1;
  v23 *= 0x10i64;
  v24 = *(v22 + v23 + 8);
  v25 = *(v22 + v23);
  *(v22 + v23) = 0x18000010;
  *(v22 + v23 + 4) = 0;
  *(v22 + v23 + 8) = v21;
  ++v21[1];
  if ( (v25 & 0x8000000) != 0 )
  {
    v9 = v24[1]-- == 1i64;
    if ( v9 )
    {
      (*(*v24 + 8i64))(v24);
      v9 = v21[1]-- == 1i64;
      if ( !v9 )
        goto LABEL_20;
      goto LABEL_19;
    }
  }
  v9 = v21[1]-- == 1i64;
  if ( v9 )
LABEL_19:
    (*(*v21 + 8i64))(v21);
LABEL_20:
  sub_176B540(v111, sub_C5DCD0, 0i64);
  sub_176BA60(v111, 1i64, ".");
  sub_176B870(v111, 0xFFFFFFFFFFFFFFFFui64, "get_time_speeds_list");
  sub_176D900(v111, 0xFFFFFFFFFFFFFFFDui64, 0i64);
  v26 = v111[6];
  v27 = v111[0xA] - 1i64;
  v111[0xA] = v27;
  v27 *= 0x10i64;
  v28 = *(v26 + v27 + 8);
  v9 = (*(v26 + v27) & 0x8000000) == 0;
  *(v26 + v27) = 0i64;
  *(v26 + v27) = 0x1000001;
  if ( !v9 )
  {
    v9 = v28[1]-- == 1i64;
    if ( v9 )
      (*(*v28 + 8i64))(v28);
  }
  map_func(&v110, "get_time_speed", sub_C5E320, sub_98E150, 1i64, 0, 0i64);
  map_func(&v110, "is_replay_turned_on", is_replay_turned, sub_5A6F00, 1i64, 0, 0i64);
  map_func(&v110, "is_replay_saved", sub_C5E3A0, sub_5A6F00, 1i64, 0, 0i64);
  map_func(&v110, "is_replay_present", sub_C5E3D0, sub_5A6F00, 1i64, 0, 0i64);
  map_func(&v110, "get_replays_dir", sub_C5E4A0, sub_9A0B00, 1i64, 0, 0i64);
  map_func(&v110, "get_new_replay_filename", sub_C5E640, sub_9A0B00, 1i64, 0, 0i64);
  map_func(&v110, "on_save_replay", sub_C5E890, sub_988B60, 2i64, 0, 0i64);
  map_func(&v110, "on_view_replay", sub_C5ECE0, sub_557540, 2i64, 0, 0i64);
  v29 = v110[1](&v110);
  v30 = *v29;
  v31 = *(v29 + 4);
  v32 = *(v29 + 8);
  v33 = v111;
  if ( (v30 & 0x8000000) != 0 )
    ++v32[1];
  v34 = v33[6];
  v35 = v33[0xA];
  v36 = v35 + 1;
  v35 *= 0x10i64;
  v33[0xA] = v36;
  v37 = *(v34 + v35);
  v38 = *(v34 + v35 + 8);
  *(v34 + v35) = v30;
  *(v34 + v35 + 4) = v31;
  *(v34 + v35 + 8) = v32;
  if ( (v30 & 0x8000000) != 0 )
    ++v32[1];
  if ( (v37 & 0x8000000) != 0 && (v9 = v38[1] == 1i64, --v38[1], v9) )
  {
    (*(*v38 + 8i64))(v38);
    if ( (v30 & 0x8000000) == 0 )
      goto LABEL_35;
  }
  else if ( (v30 & 0x8000000) == 0 )
  {
    goto LABEL_35;
  }
  v9 = v32[1]-- == 1i64;
  if ( v9 )
    (*(*v32 + 8i64))(v32);
LABEL_35:
  v39 = v111;
  v40 = sq_pushstring(*(v111[0x28] + 0x30i64), "get_replays_list", 0xFFFFFFFFFFFFFFFFui64);
  ++v40[1];
  v41 = v39[6];
  v42 = v39[0xA];
  v39[0xA] = v42 + 1;
  v42 *= 0x10i64;
  v43 = *(v41 + v42 + 8);
  v44 = *(v41 + v42);
  *(v41 + v42) = 0x18000010;
  *(v41 + v42 + 4) = 0;
  *(v41 + v42 + 8) = v40;
  ++v40[1];
  if ( (v44 & 0x8000000) != 0 )
  {
    v9 = v43[1]-- == 1i64;
    if ( v9 )
    {
      (*(*v43 + 8i64))(v43);
      v9 = v40[1]-- == 1i64;
      if ( !v9 )
        goto LABEL_39;
      goto LABEL_38;
    }
  }
  v9 = v40[1]-- == 1i64;
  if ( v9 )
LABEL_38:
    (*(*v40 + 8i64))(v40);
LABEL_39:
  sub_176B540(v111, get_replays_list, 0i64);
  sub_176BA60(v111, 1i64, ".");
  sub_176B870(v111, 0xFFFFFFFFFFFFFFFFui64, "get_replays_list");
  sub_176D900(v111, 0xFFFFFFFFFFFFFFFDui64, 0i64);
  v45 = v111[6];
  v46 = v111[0xA] - 1i64;
  v111[0xA] = v46;
  v46 *= 0x10i64;
  v47 = *(v45 + v46 + 8);
  v9 = (*(v45 + v46) & 0x8000000) == 0;
  *(v45 + v46) = 0i64;
  *(v45 + v46) = 0x1000001;
  if ( !v9 )
  {
    v9 = v47[1]-- == 1i64;
    if ( v9 )
      (*(*v47 + 8i64))(v47);
  }
  map_func(&v110, "on_del_replay", sub_C618E0, sub_557540, 2i64, 0, 0i64);
  map_func(&v110, "on_open_replays_folder", sub_C618F0, sub_988520, 1i64, 0, 0i64);
  map_func(&v110, "is_replay_playing", sub_C61A40, sub_5A6F00, 1i64, 0, 0i64);
  v48 = v110[1](&v110);
  v49 = *v48;
  v50 = *(v48 + 4);
  v51 = *(v48 + 8);
  v52 = v111;
  if ( (v49 & 0x8000000) != 0 )
    ++v51[1];
  v53 = v52[6];
  v54 = v52[0xA];
  v55 = v54 + 1;
  v54 *= 0x10i64;
  v52[0xA] = v55;
  v56 = *(v53 + v54);
  v57 = *(v53 + v54 + 8);
  *(v53 + v54) = v49;
  *(v53 + v54 + 4) = v50;
  *(v53 + v54 + 8) = v51;
  if ( (v49 & 0x8000000) != 0 )
    ++v51[1];
  if ( (v56 & 0x8000000) != 0 && (v9 = v57[1] == 1i64, --v57[1], v9) )
  {
    (*(*v57 + 8i64))(v57);
    if ( (v49 & 0x8000000) == 0 )
      goto LABEL_54;
  }
  else if ( (v49 & 0x8000000) == 0 )
  {
    goto LABEL_54;
  }
  v9 = v51[1]-- == 1i64;
  if ( v9 )
    (*(*v51 + 8i64))(v51);
LABEL_54:
  v58 = v111;
  v59 = sq_pushstring(*(v111[0x28] + 0x30i64), "get_replay_info", 0xFFFFFFFFFFFFFFFFui64);
  ++v59[1];
  v60 = v58[6];
  v61 = v58[0xA];
  v58[0xA] = v61 + 1;
  v61 *= 0x10i64;
  v62 = *(v60 + v61 + 8);
  v63 = *(v60 + v61);
  *(v60 + v61) = 0x18000010;
  *(v60 + v61 + 4) = 0;
  *(v60 + v61 + 8) = v59;
  ++v59[1];
  if ( (v63 & 0x8000000) == 0 || (v9 = v62[1] == 1i64, --v62[1], !v9) )
  {
    v9 = v59[1]-- == 1i64;
    if ( !v9 )
      goto LABEL_58;
    goto LABEL_57;
  }
  (*(*v62 + 8i64))(v62);
  v9 = v59[1]-- == 1i64;
  if ( v9 )
LABEL_57:
    (*(*v59 + 8i64))(v59);
LABEL_58:
  *sub_176A2D0(v111, 8i64) = v2;
  v64 = v111;
  v65 = 0x10i64 * v111[0xA] + v111[6] - 0x10;
  v66 = *v65;
  if ( *v65 == 0x18004000 )
  {
    v67 = (*(v65 + 8) + 0x1A8i64);
    goto LABEL_64;
  }
  if ( v66 == 0x1A008000 )
  {
    v67 = (*(v65 + 8) + 0x48i64);
    goto LABEL_64;
  }
  if ( v66 == 0x1A000080 )
  {
    v67 = (*(v65 + 8) + 0x40i64);
LABEL_64:
    *v67 = charNode::raw_length;
  }
  sub_176B540(v64, register_replay_sq_module, 1i64);
  sub_176BA60(v111, 2i64, 0i64);
  sub_176B870(v111, 0xFFFFFFFFFFFFFFFFui64, "get_replay_info");
  sub_176D900(v111, 0xFFFFFFFFFFFFFFFDui64, 0i64);
  v68 = v111[6];
  v69 = v111[0xA] - 1i64;
  v111[0xA] = v69;
  v69 *= 0x10i64;
  v70 = *(v68 + v69 + 8);
  v9 = (*(v68 + v69) & 0x8000000) == 0;
  *(v68 + v69) = 0i64;
  *(v68 + v69) = 0x1000001;
  if ( !v9 )
  {
    v9 = v70[1]-- == 1i64;
    if ( v9 )
      (*(*v70 + 8i64))(v70);
  }
  v71 = v110[1](&v110);
  v72 = *v71;
  v73 = *(v71 + 4);
  v74 = *(v71 + 8);
  v75 = v111;
  if ( (v72 & 0x8000000) != 0 )
    ++v74[1];
  v76 = v75[6];
  v77 = v75[0xA];
  v78 = v77 + 1;
  v77 *= 0x10i64;
  v75[0xA] = v78;
  v79 = *(v76 + v77);
  v80 = *(v76 + v77 + 8);
  *(v76 + v77) = v72;
  *(v76 + v77 + 4) = v73;
  *(v76 + v77 + 8) = v74;
  if ( (v72 & 0x8000000) != 0 )
    ++v74[1];
  if ( (v79 & 0x8000000) != 0 && (v9 = v80[1] == 1i64, --v80[1], v9) )
  {
    (*(*v80 + 8i64))(v80);
    if ( (v72 & 0x8000000) == 0 )
      goto LABEL_80;
  }
  else if ( (v72 & 0x8000000) == 0 )
  {
    goto LABEL_80;
  }
  v9 = v74[1]-- == 1i64;
  if ( v9 )
    (*(*v74 + 8i64))(v74);
LABEL_80:
  v81 = v111;
  v82 = sq_pushstring(*(v111[0x28] + 0x30i64), "get_replay_props", 0xFFFFFFFFFFFFFFFFui64);
  ++v82[1];
  v83 = v81[6];
  v84 = v81[0xA];
  v81[0xA] = v84 + 1;
  v84 *= 0x10i64;
  v85 = *(v83 + v84 + 8);
  v86 = *(v83 + v84);
  *(v83 + v84) = 0x18000010;
  *(v83 + v84 + 4) = 0;
  *(v83 + v84 + 8) = v82;
  ++v82[1];
  if ( (v86 & 0x8000000) != 0 )
  {
    v9 = v85[1]-- == 1i64;
    if ( v9 )
    {
      (*(*v85 + 8i64))(v85);
      v9 = v82[1]-- == 1i64;
      if ( !v9 )
        goto LABEL_84;
      goto LABEL_83;
    }
  }
  v9 = v82[1]-- == 1i64;
  if ( v9 )
LABEL_83:
    (*(*v82 + 8i64))(v82);
LABEL_84:
  sub_176B540(v111, idk_get_sessionid, 0i64);
  sub_176BA60(v111, 1i64, ".");
  sub_176B870(v111, 0xFFFFFFFFFFFFFFFFui64, "get_replay_props");
  sub_176D900(v111, 0xFFFFFFFFFFFFFFFDui64, 0i64);
  v87 = v111[6];
  v88 = v111[0xA] - 1i64;
  v111[0xA] = v88;
  v88 *= 0x10i64;
  v89 = *(v87 + v88 + 8);
  v9 = (*(v87 + v88) & 0x8000000) == 0;
  *(v87 + v88) = 0i64;
  *(v87 + v88) = 0x1000001;
  if ( !v9 )
  {
    v9 = v89[1]-- == 1i64;
    if ( v9 )
      (*(*v89 + 8i64))(v89);
  }
  v90 = v110[1](&v110);
  v91 = *v90;
  v92 = *(v90 + 4);
  v93 = *(v90 + 8);
  v94 = v111;
  if ( (v91 & 0x8000000) != 0 )
    ++v93[1];
  v95 = v94[6];
  v96 = v94[0xA];
  v97 = v96 + 1;
  v96 *= 0x10i64;
  v94[0xA] = v97;
  v98 = *(v95 + v96);
  v99 = *(v95 + v96 + 8);
  *(v95 + v96) = v91;
  *(v95 + v96 + 4) = v92;
  *(v95 + v96 + 8) = v93;
  if ( (v91 & 0x8000000) != 0 )
    ++v93[1];
  if ( (v98 & 0x8000000) != 0 && (v9 = v99[1] == 1i64, --v99[1], v9) )
  {
    (*(*v99 + 8i64))(v99);
    if ( (v91 & 0x8000000) == 0 )
      goto LABEL_99;
  }
  else if ( (v91 & 0x8000000) == 0 )
  {
    goto LABEL_99;
  }
  v9 = v93[1]-- == 1i64;
  if ( v9 )
    (*(*v93 + 8i64))(v93);
LABEL_99:
  v100 = v111;
  v101 = sq_pushstring(*(v111[0x28] + 0x30i64), "get_replay_anchors", 0xFFFFFFFFFFFFFFFFui64);
  ++v101[1];
  v102 = v100[6];
  v103 = v100[0xA];
  v100[0xA] = v103 + 1;
  v103 *= 0x10i64;
  v104 = *(v102 + v103 + 8);
  v105 = *(v102 + v103);
  *(v102 + v103) = 0x18000010;
  *(v102 + v103 + 4) = 0;
  *(v102 + v103 + 8) = v101;
  ++v101[1];
  if ( (v105 & 0x8000000) != 0 )
  {
    v9 = v104[1]-- == 1i64;
    if ( v9 )
    {
      (*(*v104 + 8i64))(v104);
      v9 = v101[1]-- == 1i64;
      if ( !v9 )
        goto LABEL_103;
      goto LABEL_102;
    }
  }
  v9 = v101[1]-- == 1i64;
  if ( v9 )
LABEL_102:
    (*(*v101 + 8i64))(v101);
LABEL_103:
  sub_176B540(v111, sub_C62030, 0i64);
  sub_176BA60(v111, 1i64, ".");
  sub_176B870(v111, 0xFFFFFFFFFFFFFFFFui64, "get_replay_anchors");
  sub_176D900(v111, 0xFFFFFFFFFFFFFFFDui64, 0i64);
  v106 = v111[6];
  v107 = v111[0xA] - 1i64;
  v111[0xA] = v107;
  v107 *= 0x10i64;
  v108 = *(v106 + v107 + 8);
  v9 = (*(v106 + v107) & 0x8000000) == 0;
  *(v106 + v107) = 0i64;
  *(v106 + v107) = 0x1000001;
  if ( !v9 )
  {
    v9 = v108[1]-- == 1i64;
    if ( v9 )
      (*(*v108 + 8i64))(v108);
  }
  map_func(&v110, "move_to_anchor", sub_C62570, sub_4FAA30, 2i64, 0, 0i64);
  map_func(&v110, "cancel_loading", sub_C625A0, sub_988520, 1i64, 0, 0i64);
  require(a1, "replays", &v110);
  result = &off_44A93B0;
  v110 = &off_44A93B0;
  if ( (BYTE3(v112) & 8) != 0 )
    return sub_28B55C0((v111[0x28] + 0x38i64), &v112);
  return result;
}
