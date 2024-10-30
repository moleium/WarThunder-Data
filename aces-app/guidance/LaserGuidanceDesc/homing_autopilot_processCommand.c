void __fastcall homing_autopilot::processCommand(float *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  avprintf(a4, 0x20i64, "Self homing autopilot\n", 0i64, 0);
  if ( a3 <= 0 )
    return;
  v8 = *a2;
  if ( !strcmp(*a2, "accel") )
  {
    AccelControl::processCommand((a1 + 0x10), a2 + 8, a3 - 1, a4);
    return;
  }
  if ( !strcmp(v8, "N") )
  {
    if ( a3 <= 1 )
    {
      v9 = a1[0xA];
    }
    else
    {
      v9 = sub_440D968(*(a2 + 8));
      a1[0xA] = v9;
    }
    v31 = v9;
    v30 = 3;
    v12 = "N = %f\n";
    goto LABEL_47;
  }
  if ( !strcmp(v8, "elevationAdd") )
  {
    if ( a3 <= 1 )
    {
      v11 = a1[8];
    }
    else
    {
      v10 = sub_440D968(*(a2 + 8));
      v11 = v10 * *&dword_449CFE0;
      a1[8] = v11;
    }
    v31 = (v11 * *&dword_44A02B0);
    v30 = 3;
    v12 = "elevationAdd = %f\n";
    goto LABEL_47;
  }
  if ( !strcmp(v8, "loftEnabled") )
  {
    if ( a3 <= 1 )
    {
      v13 = *(a1 + 0x2C);
    }
    else
    {
      v13 = strcmp(*(a2 + 8), "true") == 0;
      *(a1 + 0x2C) = v13;
    }
    v16 = "true";
    if ( !v13 )
      v16 = "false";
    v31 = *&v16;
    v30 = 1;
    v12 = "loftEnabled = %f\n";
    goto LABEL_47;
  }
  if ( !strcmp(v8, "loftElevation") )
  {
    if ( a3 <= 1 )
    {
      v15 = a1[0xC];
    }
    else
    {
      v14 = sub_440D968(*(a2 + 8));
      v15 = v14 * *&dword_449CFE0;
      a1[0xC] = v15;
    }
    v31 = (v15 * *&dword_44A02B0);
    v30 = 3;
    v12 = "loftElevation = %f\n";
    goto LABEL_47;
  }
  if ( !strcmp(v8, "loftTargetElevation") )
  {
    if ( a3 <= 1 )
    {
      v19 = a1[0xD];
    }
    else
    {
      v17 = sub_440D968(*(a2 + 8));
      v18 = tanf(v17 * *&dword_449CFE0);
      v19 = v18 * v18;
      a1[0xD] = v19;
    }
    v31 = (atanf(fsqrt(v19)) * *&dword_44A02B0);
    v30 = 3;
    v12 = "loftTargetElevation = %f\n";
    goto LABEL_47;
  }
  if ( !strcmp(v8, "loftTargetOmegaMax") )
  {
    if ( a3 <= 1 )
    {
      v21 = a1[0xE];
    }
    else
    {
      v20 = sub_440D968(*(a2 + 8));
      v21 = (v20 * *&dword_449CFE0) * (v20 * *&dword_449CFE0);
      a1[0xE] = v21;
    }
    v31 = (fsqrt(v21) * *&dword_44A02B0);
    v30 = 3;
    v12 = "loftTargetOmegaMax = %f\n";
    goto LABEL_47;
  }
  if ( !strcmp(v8, "loftAngleToAccelMult") )
  {
    if ( a3 <= 1 )
    {
      v23 = a1[0xF];
    }
    else
    {
      v22 = sub_440D968(*(a2 + 8));
      v23 = v22 * *&dword_44A02B0;
      a1[0xF] = v23;
    }
    v31 = (v23 * *&dword_449CFE0);
    v30 = 3;
    v12 = "loftAngleToAccelMult = %f\n";
LABEL_47:
    avprintf(a4, 0x10i64, v12, &v30, 1);
    return;
  }
  if ( !strcmp(v8, "timeToGain") )
  {
    if ( a3 < 3 )
    {
      a1[2] = 0.0;
    }
    else
    {
      sub_440D968(*(a2 + 0x10));
      unknown_libname_78(*(a2 + 8));
      sub_260E60(a1);
    }
    avprintf(a4, 0x10i64, "timeToGain: [", 0i64, 0);
    if ( *(a1 + 2) )
    {
      v24 = 8i64;
      v25 = 0i64;
      do
      {
        v26 = *a1;
        v31 = *(*a1 + v24 - 8);
        v30 = 3;
        v33 = *(v26 + v24);
        v32 = 3;
        avprintf(a4, 0x10i64, " %f = %f", &v30, 2);
        ++v25;
        v24 += 0xCi64;
      }
      while ( v25 < *(a1 + 2) );
    }
    goto LABEL_58;
  }
  if ( !strcmp(v8, "timeToHitToGain") )
  {
    if ( a3 < 3 )
    {
      a1[6] = 0.0;
    }
    else
    {
      sub_440D968(*(a2 + 0x10));
      unknown_libname_78(*(a2 + 8));
      sub_260E60(a1 + 4);
    }
    avprintf(a4, 0x10i64, "timeToHitToGain: [", 0i64, 0);
    if ( *(a1 + 6) )
    {
      v27 = 8i64;
      v28 = 0i64;
      do
      {
        v29 = *(a1 + 2);
        v31 = *(v29 + v27 - 8);
        v30 = 3;
        v33 = *(v29 + v27);
        v32 = 3;
        avprintf(a4, 0x10i64, " %f = %f", &v30, 2);
        ++v28;
        v27 += 0xCi64;
      }
      while ( v28 < *(a1 + 6) );
    }
LABEL_58:
    avprintf(a4, 2i64, " ]\n", 0i64, 0);
  }
}