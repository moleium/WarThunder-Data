void __fastcall AccelControl::processCommand(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  if ( !*(a1 + 0x30) )
    return;
  avprintf(a4, 0x10i64, "Accel control\n", 0i64, 0);
  if ( a3 <= 0 )
  {
LABEL_15:
    v30 = *(a1 + 0x34);
    v29 = 3;
    avprintf(a4, 0x10i64, "P = %f\n", &v29, 1);
    v30 = *(a1 + 0x38);
    v29 = 3;
    avprintf(a4, 0x10i64, "I = %f\n", &v29, 1);
    v30 = *(a1 + 0x3C);
    v29 = 3;
    avprintf(a4, 0x10i64, "D = %f\n", &v29, 1);
    v30 = *(a1 + 0x40);
    v29 = 3;
    avprintf(a4, 0x10i64, "Imax = %f\n", &v29, 1);
    v30 = (fsqrt(*(a1 + 0x18)) * *&dword_44A46B0);
    v29 = 3;
    avprintf(a4, 0x10i64, "base IAS = %.0f km/h\n", &v29, 1);
    v18 = *(a1 + 0xC) / *&gamephys::gravity;
LABEL_16:
    v30 = v18;
    v29 = 3;
    v19 = "N.r.max = %.2fG\n";
LABEL_39:
    avprintf(a4, 0x10i64, v19, &v29, 1);
    return;
  }
  v8 = *a2;
  if ( !strcmp(*a2, "all") )
  {
    if ( a3 >= 8 )
    {
      v12 = atof(*(a2 + 8));
      *(a1 + 0x34) = v12;
      v13 = atof(*(a2 + 0x10));
      *(a1 + 0x38) = v13;
      v14 = atof(*(a2 + 0x18));
      *(a1 + 0x3C) = v14;
      v15 = atof(*(a2 + 0x20));
      *(a1 + 0x40) = v15;
      v16 = atof(*(a2 + 0x28));
      *&v16 = v16 * *&qword_452BE48 * (v16 * *&qword_452BE48);
      *(a1 + 0x18) = LODWORD(v16);
      v17 = *&gamephys::gravity * atof(*(a2 + 0x30));
      *(a1 + 0xC) = v17;
    }
    goto LABEL_15;
  }
  if ( !strcmp(v8, "pid") )
  {
    if ( a3 <= 3 )
    {
      v20 = *(a1 + 0x34);
    }
    else
    {
      v20 = atof(*(a2 + 8));
      *(a1 + 0x34) = v20;
      v21 = atof(*(a2 + 0x10));
      *(a1 + 0x38) = v21;
      v22 = atof(*(a2 + 0x18));
      *(a1 + 0x3C) = v22;
    }
    v30 = v20;
    v29 = 3;
    avprintf(a4, 0x10i64, "P = %f\n", &v29, 1);
    v30 = *(a1 + 0x38);
    v29 = 3;
    avprintf(a4, 0x10i64, "I = %f\n", &v29, 1);
    goto LABEL_23;
  }
  if ( !strcmp(v8, "p") )
  {
    if ( a3 <= 1 )
    {
      v23 = *(a1 + 0x34);
    }
    else
    {
      v23 = atof(*(a2 + 8));
      *(a1 + 0x34) = v23;
    }
    v30 = v23;
    v29 = 3;
    v19 = "P = %f\n";
    goto LABEL_39;
  }
  if ( !strcmp(v8, "i") )
  {
    if ( a3 <= 1 )
    {
      v25 = *(a1 + 0x38);
    }
    else
    {
      v25 = atof(*(a2 + 8));
      *(a1 + 0x38) = v25;
    }
    v30 = v25;
    v29 = 3;
    v19 = "I = %f\n";
    goto LABEL_39;
  }
  if ( !strcmp(v8, "d") )
  {
    if ( a3 > 1 )
    {
      v24 = atof(*(a2 + 8));
      *(a1 + 0x3C) = v24;
      goto LABEL_24;
    }
LABEL_23:
    v24 = *(a1 + 0x3C);
LABEL_24:
    v30 = v24;
    v29 = 3;
    v19 = "D = %f\n";
    goto LABEL_39;
  }
  if ( !strcmp(v8, "Imax") )
  {
    if ( a3 <= 1 )
    {
      v26 = *(a1 + 0x40);
    }
    else
    {
      v26 = atof(*(a2 + 8));
      *(a1 + 0x40) = v26;
    }
    v30 = v26;
    v29 = 3;
    v19 = "Imax = %f\n";
    goto LABEL_39;
  }
  if ( strcmp(v8, "baseIAS") )
  {
    if ( strcmp(v8, "NrMax") )
      return;
    if ( a3 <= 1 )
    {
      v11 = *(a1 + 0xC);
      v10 = *&gamephys::gravity;
    }
    else
    {
      v9 = atof(*(a2 + 8));
      v10 = *&gamephys::gravity;
      v11 = *&gamephys::gravity * v9;
      *(a1 + 0xC) = v11;
    }
    v18 = v11 / v10;
    goto LABEL_16;
  }
  if ( a3 <= 1 )
  {
    v28 = *(a1 + 0x18);
  }
  else
  {
    v27 = atof(*(a2 + 8));
    v28 = v27 * *&qword_452BE48 * (v27 * *&qword_452BE48);
    *(a1 + 0x18) = v28;
  }
  v30 = (fsqrt(v28) * *&dword_44A46B0);
  v29 = 3;
  avprintf(a4, 0x20i64, "base IAS = %.0f km/h\n", &v29, 1);
}
