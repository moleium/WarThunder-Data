void __fastcall predicton_handler(__int64 ballistic_computer, __int64 LocalUnit, float a3)
{
  unsigned __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // rcx
  int v9; // eax
  char v10; // cc
  int v11; // eax
  __int64 v12; // rcx
  float SelectedTargetPosition_Z; // xmm0_4
  float SelectedTargetPosition_Y; // xmm12_4
  float SelectedTargetPosition_X; // xmm11_4
  unsigned int LocalUnitType; // eax
  float LocalVelocity_Z; // xmm4_4
  int v18; // ecx
  __int64 ground_movement; // rcx
  float *ground_velocity; // rdx
  bool is_ground_vel; // zf
  float *ground_velocity_; // rcx
  float LocalVelocity_X; // xmm10_4
  float LocalVelocity_Y; // xmm9_4
  float TargetVelocity_Z; // xmm4_4
  float TargetVelocity_Y; // xmm5_4
  float TargetVelocity_X; // xmm3_4
  __int8 is_target_selected; // dl
  __int64 SelectedTarget; // rax
  unsigned int SelectedTargetUnitType; // ecx
  int v31; // ebp
  __int64 target_ground_movement; // rbp
  float *target_ground_velocity; // rbx
  float *v34; // rbp
  float delta_z_position; // xmm0_4
  float delta_y_position; // xmm12_4
  __int64 ballistic_computer_1e18; // rsi
  float delta_x_position; // xmm11_4
  float target_distance; // xmm7_4
  float scalling_factor; // xmm6_4
  float weighted_velocity_sum; // xmm2_4
  double *target_air_movement; // rax
  double *air_movement; // rax
  int adjusted_velocity[4]; // [rsp+38h] [rbp-130h] BYREF
  int adjusted_position[8]; // [rsp+48h] [rbp-120h] BYREF
  float v46; // [rsp+68h] [rbp-100h]
  float v47; // [rsp+6Ch] [rbp-FCh]
  float v48; // [rsp+70h] [rbp-F8h]
  char v49; // [rsp+74h] [rbp-F4h]
  float v50; // [rsp+78h] [rbp-F0h]
  int v51; // [rsp+A0h] [rbp-C8h]
  float v52; // [rsp+A4h] [rbp-C4h]
  float v53; // [rsp+A8h] [rbp-C0h]
  float v54; // [rsp+ACh] [rbp-BCh]
  float v55; // [rsp+BCh] [rbp-ACh]

  if ( *(ballistic_computer + 0x1E28) != LocalUnit )
    return;
  if ( *(LocalUnit + 0x1238) )
  {
    v6 = 0i64;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(*(LocalUnit + 0x1228) + 8 * v6);
      v9 = (*(*v8 + 0x80i64))(v8);
      v10 = (v7 + v9 < 0) ^ __OFADD__(v7, v9) | (v7 + v9 == 0);
      v11 = v7 + v9;
      if ( !v10 )
        break;
      ++v6;
      v7 = v11;
      if ( v6 >= *(LocalUnit + 0x1238) )
        goto LABEL_17;
    }
    v12 = *(*(LocalUnit + 0x1228) + 8 * v6);
    if ( (*(*v12 + 0x88i64))(v12, LocalUnit + 0x1488, -v7) )
    {
      v51 = v6;
      if ( v49 )
      {
        SelectedTargetPosition_Z = (v48 * v50) + *&adjusted_position[6];
        SelectedTargetPosition_Y = (v47 * v50) + *&adjusted_position[5];
        SelectedTargetPosition_X = (v50 * v46) + *&adjusted_position[4];

        LocalUnitType = *(LocalUnit + 0x10B0);
        LocalVelocity_Z = 0.0;
        if ( LocalUnitType <= 0xF )
        {
          v18 = 0x897E;
          if ( _bittest(&v18, LocalUnitType) )
          {
            // Tanks Checks
            ground_movement = *(LocalUnit + 0x1EA0);
            ground_velocity = (ground_movement + 0x54);
            is_ground_vel = ground_movement == 0;
            ground_velocity_ = &xmmword_4514A60;
            if ( !is_ground_vel )
              ground_velocity_ = ground_velocity;
            if ( *(LocalUnit + 0x58) == 1 )
              ground_velocity_ = (LocalUnit + 0x22AC);
            LocalVelocity_X = *ground_velocity_;
            LocalVelocity_Y = ground_velocity_[1];
            LocalVelocity_Z = ground_velocity_[2];
            goto LABEL_16;
          }
          if ( !*(LocalUnit + 0x10B0) )
          {
            // Aircraft checks
            LocalVelocity_Y = 0.0;
            LocalVelocity_X = 0.0;
            if ( (*(LocalUnit + 0x1058) & 0x2000010) == 0 )
            {
              air_movement = *(LocalUnit + 0x9D0);
              LocalVelocity_Z = air_movement[0x132];
              LocalVelocity_Y = air_movement[0x131];
              LocalVelocity_X = air_movement[0x130];
            }
            goto LABEL_16;
          }
        }
        LocalVelocity_Y = 0.0;
        LocalVelocity_X = 0.0;
LABEL_16:
        TargetVelocity_Z = (v54 * v50) + ((v48 * v55) + LocalVelocity_Z);
        TargetVelocity_Y = (v53 * v50) + ((v47 * v55) + LocalVelocity_Y);
        TargetVelocity_X = (v50 * v52) + ((v55 * v46) + LocalVelocity_X);
        is_target_selected = 1;
        goto LABEL_27;
      }
    }
  }
LABEL_17:
  SelectedTarget = *(ballistic_computer + 0x620);
  TargetVelocity_X = 0.0;
  if ( SelectedTarget )
  {
    SelectedTargetPosition_X = *(SelectedTarget + 0x9C0);
    SelectedTargetPosition_Y = *(SelectedTarget + 0x9C4);
    SelectedTargetPosition_Z = *(SelectedTarget + 0x9C8);
    SelectedTargetUnitType = *(SelectedTarget + 0x10B0);
    is_target_selected = 1;
    if ( SelectedTargetUnitType <= 0xF )
    {
      v31 = 0x897E;
      if ( _bittest(&v31, SelectedTargetUnitType) )
      {
        // If Target is A Tank
        target_ground_movement = *(SelectedTarget + 0x1EA0);
        target_ground_velocity = (target_ground_movement + 0x54);
        is_ground_vel = target_ground_movement == 0;
        v34 = &xmmword_4514A60;
        if ( !is_ground_vel )
          v34 = target_ground_velocity;
        if ( *(SelectedTarget + 0x58) == 1 )
          v34 = (SelectedTarget + 0x22AC);
        TargetVelocity_X = *v34;
        TargetVelocity_Y = v34[1];
        TargetVelocity_Z = v34[2];
        goto LABEL_27;
      }
      if ( !*(SelectedTarget + 0x10B0) && (*(SelectedTarget + 0x1058) & 0x2000010) == 0 )
      {
        // If Target is an Aircraft
        target_air_movement = *(SelectedTarget + 0x9D0);
        TargetVelocity_Z = target_air_movement[0x132];
        TargetVelocity_Y = target_air_movement[0x131];
        TargetVelocity_X = target_air_movement[0x130];
        goto LABEL_27;
      }
    }
  }
  else
  {
    is_target_selected = 0;
    SelectedTargetPosition_X = 0.0;
    SelectedTargetPosition_Y = 0.0;
    SelectedTargetPosition_Z = 0.0;
  }
  TargetVelocity_Y = 0.0;
  TargetVelocity_Z = 0.0;
LABEL_27:
  delta_z_position = SelectedTargetPosition_Z - *(LocalUnit + 0x9C8);
  delta_y_position = SelectedTargetPosition_Y - *(LocalUnit + 0x9C4);
  ballistic_computer_1e18 = ballistic_computer + 0x1E18;
  delta_x_position = SelectedTargetPosition_X - *(LocalUnit + 0x9C0);
  target_distance = fsqrt(
                      ((delta_z_position * delta_z_position) + (delta_y_position * delta_y_position))
                    + (delta_x_position * delta_x_position));
  scalling_factor = 0.0;
  if ( target_distance > *&dword_449F1A8 )
    scalling_factor = Y / target_distance;
  *adjusted_position = delta_x_position * scalling_factor;
  *&adjusted_position[1] = delta_y_position * scalling_factor;
  *&adjusted_position[2] = delta_z_position * scalling_factor;
  weighted_velocity_sum = ((delta_z_position * scalling_factor) * TargetVelocity_Z)
                        + (((delta_y_position * scalling_factor) * TargetVelocity_Y)
                         + ((delta_x_position * scalling_factor) * TargetVelocity_X));
  *adjusted_velocity = (TargetVelocity_X - ((delta_x_position * scalling_factor) * weighted_velocity_sum))
                     * scalling_factor;
  *&adjusted_velocity[1] = (TargetVelocity_Y - ((delta_y_position * scalling_factor) * weighted_velocity_sum))
                         * scalling_factor;
  *&adjusted_velocity[2] = (TargetVelocity_Z - ((delta_z_position * scalling_factor) * weighted_velocity_sum))
                         * scalling_factor;
  air_predicton(
    ballistic_computer_1e18,
    is_target_selected,
    adjusted_position,
    adjusted_velocity,
    target_distance,
    weighted_velocity_sum,
    a3);
}