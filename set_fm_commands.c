__int64 __fastcall set_fm_commands(
        __int64 a1,
        char *command_data,
        const char *command_name,
        float *unit,
        __int64 air_movement)
{
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  char *v11; // rsi
  signed __int64 v12; // rdx
  char *v13; // rsi
  signed __int64 v14; // rdx
  signed __int64 v15; // rdx
  int v16; // r9d
  int v17; // xmm1_4
  float v18; // xmm0_4
  signed __int64 v19; // rdx
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  signed __int64 v27; // rdx
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  __int64 fuelMassRatio; // rdi
  float fuelMassDiff; // xmm6_4
  _BYTE *v33; // rdi
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rax
  void (*v36)(void); // rax
  signed __int64 v37; // rdx
  int v38; // edx
  int v39; // r8d
  int v40; // r9d
  float v41; // xmm6_4
  signed __int64 v42; // rdx
  int *coolantTempArray; // rax
  int coolantTempCount; // ecx
  int coolantTempValue; // xmm0_4
  __int64 index; // rdx
  _DWORD *coolantTempElement; // rbx
  int *v48; // rax
  int v49; // ecx
  int v50; // xmm0_4
  __int64 v51; // rdx
  _DWORD *v52; // rbx
  int v54[4]; // [rsp+30h] [rbp-98h] BYREF
  char Buffer[4]; // [rsp+40h] [rbp-88h] BYREF
  const char *v56; // [rsp+48h] [rbp-80h]
  int v57; // [rsp+50h] [rbp-78h]
  __int64 v58; // [rsp+58h] [rbp-70h]
  int v59; // [rsp+60h] [rbp-68h]
  const char *v60; // [rsp+68h] [rbp-60h]
  int v61; // [rsp+7Ch] [rbp-4Ch]
  int v62[4]; // [rsp+80h] [rbp-48h] BYREF

  if ( !strcmp(command_name, "setAlt") )
  {
    v11 = *(command_data + 3);
    if ( v11 )
      v12 = strlen(v11);
    else
      v12 = 0i64;
    if ( !parse_command_data(v11, v12, "value", Buffer, 0x20i64) || sub_1EC440(Buffer, "%f") != 1 )
      goto LABEL_77;
    *&v17 = *(air_movement + 0x918);
    v18 = *(air_movement + 0x908);
    *v54 = v18;
    v54[2] = v17;
    v54[1] = v61;
    LOBYTE(v16) = 1;
    set_unit_value(unit, 0, v54, v16, 1);
  }
  else
  {
    if ( strcmp(command_name, "setVelocity") )
    {
      if ( !strcmp(command_name, "setFuelMassRatio") )
      {
        command_data = *(command_data + 3);
        if ( command_data )
          v15 = strlen(command_data);
        else
          v15 = 0i64;
        if ( !parse_command_data(command_data, v15, "value", Buffer, 0x20i64) || sub_1EC440(Buffer, "%f") != 1 )
          goto LABEL_77;
        fuelMassRatio = air_movement + 0x3630;
        fuelMassDiff = *(air_movement + 0x364C);
        LOBYTE(command_data) = 1;
        LOBYTE(v29) = 1;
        LOBYTE(v30) = 1;
        sub_15FBCF0(air_movement + 0x3630, v28, v29, v30, 0, 0);
        *(air_movement + 0x3634) = (*(air_movement + 0x364C) - fuelMassDiff) + *(air_movement + 0x3634);
      }
      else
      {
        if ( strcmp(command_name, "setMass") )
        {
          if ( !strcmp(command_name, "setCoolantOrHeadTemperature") )
          {
            v54[0] = 0;
            command_data = *(command_data + 3);
            if ( command_data )
              v27 = strlen(command_data);
            else
              v27 = 0i64;
            if ( !parse_command_data(command_data, v27, "value", Buffer, 0x20i64) || sub_1EC440(Buffer, "%f") != 1 )
              goto LABEL_77;
            coolantTempArray = *(air_movement + 0x3AC8);
            coolantTempCount = *coolantTempArray;
            if ( *coolantTempArray > 0 )
            {
              coolantTempValue = v54[0];
              index = 0i64;
              do
              {
                coolantTempElement = *&coolantTempArray[2 * index + 2];
                if ( !*(*coolantTempElement + 1i64) )
                {
                  coolantTempElement[0xB2] = coolantTempValue;
                  coolantTempArray = *(air_movement + 0x3AC8);
                  coolantTempCount = *coolantTempArray;
                }
                ++index;
              }
              while ( index < coolantTempCount );
            }
          }
          else
          {
            if ( strcmp(command_name, "setOilTemperature") )
            {
              if ( !strcmp(command_name, "setTemperature") )
              {
                v54[0] = 0;
                command_data = *(command_data + 3);
                if ( command_data )
                  v42 = strlen(command_data);
                else
                  v42 = 0i64;
                if ( parse_command_data(command_data, v42, "value", Buffer, 0x20i64) && sub_1EC440(Buffer, "%f") == 1 )
                {
                  MEMORY[0x4A79204] = v54[0];
                  *&globalTemperature = (*&globalTemperatureVar2 * *&globalTemperatureVar3) / *v54;
                  LOBYTE(command_data) = 1;
                  return command_data;
                }
              }
              else if ( !strcmp(command_name, "setPressure") )
              {
                *Buffer = 0.0;
                if ( sub_B0A5E0(command_data, "value", Buffer) )
                {
                  globalTemperatureVar2 = *Buffer;
                  *&globalTemperature = (*Buffer * *&globalTemperatureVar3) / *&MEMORY[0x4A79204];
                  LOBYTE(command_data) = 1;
                  return command_data;
                }
              }
              else if ( !strcmp(command_name, "setTimeSpeed") )
              {
                *Buffer = 1.0;
                if ( sub_B0A5E0(command_data, "value", Buffer) )
                {
                  v9 = _mm_and_ps(*(game + 0x1AC), xmmword_449AF40);
                  v10 = dword_44A0308;
                  v10.m128_f32[0] = *&dword_44A0308 * v9.m128_f32[0];
                  *(game
                  + 8i64 * (_mm_cvtsi128_si32(_mm_or_ps(_mm_cmple_ps(v9, v10), _mm_cmple_ps(v9, dword_44A0634))) & 1)
                  + 0x1AC) = *Buffer;
                  LOBYTE(command_data) = 1;
                  return command_data;
                }
              }
LABEL_77:
              LODWORD(command_data) = 0;
              return command_data;
            }
            v54[0] = 0;
            command_data = *(command_data + 3);
            if ( command_data )
              v37 = strlen(command_data);
            else
              v37 = 0i64;
            if ( !parse_command_data(command_data, v37, "value", Buffer, 0x20i64) || sub_1EC440(Buffer, "%f") != 1 )
              goto LABEL_77;
            v48 = *(air_movement + 0x3AC8);
            v49 = *v48;
            if ( *v48 > 0 )
            {
              v50 = v54[0];
              v51 = 0i64;
              do
              {
                v52 = *&v48[2 * v51 + 2];
                if ( !*(*v52 + 1i64) )
                {
                  v52[0xB3] = v50;
                  v48 = *(air_movement + 0x3AC8);
                  v49 = *v48;
                }
                ++v51;
              }
              while ( v51 < v49 );
            }
          }
          LOBYTE(command_data) = 1;
          return command_data;
        }
        command_data = *(command_data + 3);
        if ( command_data )
          v19 = strlen(command_data);
        else
          v19 = 0i64;
        if ( !parse_command_data(command_data, v19, "value", Buffer, 0x20i64) || sub_1EC440(Buffer, "%f") != 1 )
          goto LABEL_77;
        fuelMassRatio = air_movement + 0x3630;
        v41 = fmaxf(COERCE_FLOAT(xmmword_44801F0 ^ *(air_movement + 0x364C)), *v54 - *(air_movement + 0x3634));
        LOBYTE(command_data) = 1;
        LOBYTE(v39) = 1;
        LOBYTE(v40) = 1;
        sub_15FBCF0(air_movement + 0x3630, v38, v39, v40, 0, 0);
        *(air_movement + 0x3634) = v41 + *(air_movement + 0x3634);
      }
      sub_B0A650(a1, fuelMassRatio);
      return command_data;
    }
    v13 = *(command_data + 3);
    if ( v13 )
      v14 = strlen(v13);
    else
      v14 = 0i64;
    if ( !parse_command_data(v13, v14, "value", Buffer, 0x20i64) || sub_1EC440(Buffer, "%f") != 1 )
      goto LABEL_77;
    v20 = *(air_movement + 0x990);
    v21 = *(air_movement + 0x988);
    v22 = *(air_movement + 0x980);
    v23 = fsqrt(((v20 * v20) + (v21 * v21)) + (v22 * v22));
    if ( v23 <= Y )
    {
      v24 = unit[0x269] * *v54;
      v25 = unit[0x268] * *v54;
      v26 = *v54 * unit[0x267];
    }
    else
    {
      v24 = v20 * (*v54 / v23);
      v25 = v21 * (*v54 / v23);
      v26 = (*v54 / v23) * v22;
    }
    *v62 = v26;
    *&v62[1] = v25;
    *&v62[2] = v24;
    sub_1573580(air_movement, v62);
  }
  command_data = off_4B678B0;
  v33 = (*(*off_4B678B0 + 0x18i64))(off_4B678B0, 0x110i64);
  *v33 = 0;
  v56 = "200 OK";
  *Buffer = 1;
  v58 = 0x10i64;
  v57 = 2;
  v60 = "{\"result\": \"OK\"}";
  v59 = 1;
  v34 = sub_16E07A0(v33, 3);
  v35 = 0x10Fi64;
  if ( v34 >= 0xCC )
  {
    v33 = (*(*command_data + 0x38i64))(command_data, v33, ".00cfg");
    v35 = 0x21Fi64;
  }
  if ( v34 < v35 )
    v35 = v34;
  v33[v35] = 0;
  if ( *(a1 + 0x4E8) )
  {
    v36 = *(a1 + 0x4F8);
    if ( v36 )
      v36();
  }
  *(a1 + 0x4E8) = v33;
  *(a1 + 0x4F0) = v34;
  *(a1 + 0x4F8) = sub_AF0C50;
  (*(*command_data + 0x40i64))(command_data, 0i64);
  LOBYTE(command_data) = 1;
  return command_data;
}
