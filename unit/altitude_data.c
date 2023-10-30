char __fastcall process_altitude_data(__int64 http_req, float *min_altitude, float *max_altitude, float *step_altitude)
{
  _BYTE *dataptr; // rdi
  signed __int64 data_len; // rdx
  _BYTE *v10; // rdi
  signed __int64 v11; // rdx
  char *v12; // rsi
  signed __int64 v13; // rdx
  char Buffer[72]; // [rsp+30h] [rbp-48h] BYREF

  dataptr = *(http_req + 0x18);
  if ( dataptr )
    data_len = strlen(*(http_req + 0x18));
  else
    data_len = 0i64;
  if ( !parse_command_data(dataptr, data_len, "minAlt", Buffer, 0x20i64) || format_as(Buffer, "%f") != 1 )
    return 0;
  v10 = *(http_req + 0x18);
  v11 = v10 ? strlen(*(http_req + 0x18)) : 0i64;
  if ( !parse_command_data(v10, v11, "maxAlt", Buffer, 0x20i64) || format_as(Buffer, "%f") != 1 )
    return 0;
  v12 = *(http_req + 0x18);
  v13 = v12 ? strlen(v12) : 0i64;
  if ( !parse_command_data(v12, v13, "stepAlt", Buffer, 0x20i64) || format_as(Buffer, "%f") != 1 )
    return 0;
  *max_altitude = fmaxf(*min_altitude, *max_altitude);
  *step_altitude = fmaxf(*step_altitude, *&dword_44890B4);
  return 1;
}
