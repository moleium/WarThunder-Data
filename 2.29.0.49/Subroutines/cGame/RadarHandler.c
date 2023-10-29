void __fastcall RadarHandler_468B20(__int64 BallisticComputer, __int64 LocalPlayerUnit, float a3)
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
  unsigned int LocalUnitState; // eax
  float LocalVelocity_Z; // xmm4_4
  int v18; // ecx
  __int64 LocalPlayerGroundVelocityContainer; // rcx
  float *LocalPlayerGroundVelocity; // rdx
  bool IsGroundVelocity; // zf
  float *v22; // rcx
  float LocalVelocity_X; // xmm10_4
  float LocalVelocity_Y; // xmm9_4
  float TargetVelocity_Z; // xmm4_4
  float TargetVelocity_Y; // xmm5_4
  float TargetVelocity_X; // xmm3_4
  __int8 someBool; // dl
  __int64 SelectedTargetUnitPtr; // rax
  unsigned int SelectedTargetUnitState; // ecx
  int v31; // ebp
  __int64 TargetGroundVelocityContainer; // rbp
  float *TargetGroundVelocity; // rbx
  float *v34; // rbp
  float TargetToLocalPlayer_DifferenceIn_Z; // xmm0_4
  float TargetToLocalPlayer_DifferenceIn_Y; // xmm12_4
  __int64 BallisticComputer_1DA0; // rsi
  float TargetToLocalPlayer_DifferenceIn_X; // xmm11_4
  float TargetDistance; // xmm7_4
  float someScalingFactor_idk; // xmm6_4
  float targetRelativeVelocity_idk; // xmm2_4
  double *TargetAirVelocityArray; // rax
  double *LocalAirVelocityArray; // rax
  int v44[4]; // [rsp+38h] [rbp-130h] BYREF
  int v45[8]; // [rsp+48h] [rbp-120h] BYREF
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

  if ( *(_QWORD *)(BallisticComputer + 0x1DB0) != LocalPlayerUnit )
    return;
  if ( *(_DWORD *)(LocalPlayerUnit + 0x1238) )
  {
    v6 = 0i64;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(LocalPlayerUnit + 0x1228) + 8 * v6);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128i64))(v8);
      v10 = (v7 + v9 < 0) ^ __OFADD__(v7, v9) | (v7 + v9 == 0);
      v11 = v7 + v9;
      if ( !v10 )
        break;
      ++v6;
      v7 = v11;
      if ( v6 >= *(unsigned int *)(LocalPlayerUnit + 0x1238) )
        goto LABEL_17;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(LocalPlayerUnit + 0x1228) + 8 * v6);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 0x88i64))(
           v12,
           LocalPlayerUnit + 0x1488,
           (unsigned int)-v7) )
    {
      v51 = v6;
      if ( v49 )
      {
        SelectedTargetPosition_Z = (float)(v48 * v50) + *(float *)&v45[6];
        SelectedTargetPosition_Y = (float)(v47 * v50) + *(float *)&v45[5];
        SelectedTargetPosition_X = (float)(v50 * v46) + *(float *)&v45[4];
        LocalUnitState = *(unsigned __int16 *)(LocalPlayerUnit + 0x10B0);
        LocalVelocity_Z = 0.0;
        if ( LocalUnitState <= 15 )
        {
          v18 = 0x897E;
          if ( _bittest(&v18, LocalUnitState) )
          {
            LocalPlayerGroundVelocityContainer = *(_QWORD *)(LocalPlayerUnit + 0x1EA0);
            LocalPlayerGroundVelocity = (float *)(LocalPlayerGroundVelocityContainer + 0x54);
            IsGroundVelocity = LocalPlayerGroundVelocityContainer == 0;
            v22 = (float *)&xmmword_450E8F0;
            if ( !IsGroundVelocity )
              v22 = LocalPlayerGroundVelocity;
            if ( *(_BYTE *)(LocalPlayerUnit + 0x58) == 1 )
              v22 = (float *)(LocalPlayerUnit + 0x22AC);
            LocalVelocity_X = *v22;
            LocalVelocity_Y = v22[1];
            LocalVelocity_Z = v22[2];
            goto LABEL_16;
          }
          if ( !*(_WORD *)(LocalPlayerUnit + 0x10B0) )
          {
            LocalVelocity_Y = 0.0;
            LocalVelocity_X = 0.0;
            if ( (*(_DWORD *)(LocalPlayerUnit + 0x1058) & 0x2000010) == 0 )
            {
              LocalAirVelocityArray = *(double **)(LocalPlayerUnit + 0x9D0);// air velocity container??
                                                // 
                                                // 
                                                // idk what to call the LocalVelocity_X-Y-Z variable since 
                                                // it might be a container that gets overwritten 
                                                // with whatever type of unit's velocity the player has like air, ground, naval 
              LocalVelocity_Z = LocalAirVelocityArray[0x132];// x990
                                                // 
              LocalVelocity_Y = LocalAirVelocityArray[0x131];// x988
                                                // 
              LocalVelocity_X = LocalAirVelocityArray[0x130];// x980
                                                // 
            }
            goto LABEL_16;
          }
        }
        LocalVelocity_Y = 0.0;
        LocalVelocity_X = 0.0;
LABEL_16:
        TargetVelocity_Z = (float)(v54 * v50) + (float)((float)(v48 * v55) + LocalVelocity_Z);
        TargetVelocity_Y = (float)(v53 * v50) + (float)((float)(v47 * v55) + LocalVelocity_Y);
        TargetVelocity_X = (float)(v50 * v52) + (float)((float)(v55 * v46) + LocalVelocity_X);
        someBool = 1;
        goto LABEL_27;
      }
    }
  }
LABEL_17:
  SelectedTargetUnitPtr = *(_QWORD *)(BallisticComputer + 0x620);
  TargetVelocity_X = 0.0;
  if ( SelectedTargetUnitPtr )
  {
    SelectedTargetPosition_X = *(float *)(SelectedTargetUnitPtr + 0x9C0);
    SelectedTargetPosition_Y = *(float *)(SelectedTargetUnitPtr + 0x9C4);
    SelectedTargetPosition_Z = *(float *)(SelectedTargetUnitPtr + 0x9C8);
    SelectedTargetUnitState = *(unsigned __int16 *)(SelectedTargetUnitPtr + 0x10B0);
    someBool = 1;
    if ( SelectedTargetUnitState <= 15 )
    {
      v31 = 0x897E;
      if ( _bittest(&v31, SelectedTargetUnitState) )
      {
        TargetGroundVelocityContainer = *(_QWORD *)(SelectedTargetUnitPtr + 0x1EA0);
        TargetGroundVelocity = (float *)(TargetGroundVelocityContainer + 0x54);
        IsGroundVelocity = TargetGroundVelocityContainer == 0;
        v34 = (float *)&xmmword_450E8F0;
        if ( !IsGroundVelocity )
          v34 = TargetGroundVelocity;
        if ( *(_BYTE *)(SelectedTargetUnitPtr + 0x58) == 1 )
          v34 = (float *)(SelectedTargetUnitPtr + 0x22AC);
        TargetVelocity_X = *v34;
        TargetVelocity_Y = v34[1];
        TargetVelocity_Z = v34[2];
        goto LABEL_27;
      }
      if ( !*(_WORD *)(SelectedTargetUnitPtr + 0x10B0) && (*(_DWORD *)(SelectedTargetUnitPtr + 0x1058) & 33554448) == 0 )
      {
        TargetAirVelocityArray = *(double **)(SelectedTargetUnitPtr + 0x9D0);// air velocity container??
                                                // 
                                                // 
                                                // idk what to call the TargetVelocity_X-Y-Z variable since 
                                                // it might be a container that gets overwritten 
                                                // with whatever type of unit's velocity the player has like air, ground, naval 
        TargetVelocity_Z = TargetAirVelocityArray[0x132];// x990
        TargetVelocity_Y = TargetAirVelocityArray[0x131];// x988
        TargetVelocity_X = TargetAirVelocityArray[0x130];// x980
                                                // 
        goto LABEL_27;
      }
    }
  }
  else
  {
    someBool = 0;
    SelectedTargetPosition_X = 0.0;
    SelectedTargetPosition_Y = 0.0;
    SelectedTargetPosition_Z = 0.0;
  }
  TargetVelocity_Y = 0.0;
  TargetVelocity_Z = 0.0;
LABEL_27:
  TargetToLocalPlayer_DifferenceIn_Z = SelectedTargetPosition_Z - *(float *)(LocalPlayerUnit + 0x9C8);
  TargetToLocalPlayer_DifferenceIn_Y = SelectedTargetPosition_Y - *(float *)(LocalPlayerUnit + 0x9C4);
  BallisticComputer_1DA0 = BallisticComputer + 0x1DA0;
  TargetToLocalPlayer_DifferenceIn_X = SelectedTargetPosition_X - *(float *)(LocalPlayerUnit + 0x9C0);
  TargetDistance = fsqrt(
                     (float)((float)(TargetToLocalPlayer_DifferenceIn_Z * TargetToLocalPlayer_DifferenceIn_Z)
                           + (float)(TargetToLocalPlayer_DifferenceIn_Y * TargetToLocalPlayer_DifferenceIn_Y))
                   + (float)(TargetToLocalPlayer_DifferenceIn_X * TargetToLocalPlayer_DifferenceIn_X));
  someScalingFactor_idk = 0.0;
  if ( TargetDistance > *(float *)&dword_44991A8 )
    someScalingFactor_idk = *(float *)&dword_447A1D8 / TargetDistance;// some sort of factor or coefficient, 
                                                // probably a scaling factor, adjustment, correction or multiplier value
  *(float *)v45 = TargetToLocalPlayer_DifferenceIn_X * someScalingFactor_idk;
  *(float *)&v45[1] = TargetToLocalPlayer_DifferenceIn_Y * someScalingFactor_idk;
  *(float *)&v45[2] = TargetToLocalPlayer_DifferenceIn_Z * someScalingFactor_idk;
  targetRelativeVelocity_idk = (float)((float)(TargetToLocalPlayer_DifferenceIn_Z * someScalingFactor_idk)
                                     * TargetVelocity_Z)
                             + (float)((float)((float)(TargetToLocalPlayer_DifferenceIn_Y * someScalingFactor_idk)
                                             * TargetVelocity_Y)
                                     + (float)((float)(TargetToLocalPlayer_DifferenceIn_X * someScalingFactor_idk)
                                             * TargetVelocity_X));
  *(float *)v44 = (float)(TargetVelocity_X
                        - (float)((float)(TargetToLocalPlayer_DifferenceIn_X * someScalingFactor_idk)
                                * targetRelativeVelocity_idk))
                * someScalingFactor_idk;
  *(float *)&v44[1] = (float)(TargetVelocity_Y
                            - (float)((float)(TargetToLocalPlayer_DifferenceIn_Y * someScalingFactor_idk)
                                    * targetRelativeVelocity_idk))
                    * someScalingFactor_idk;
  *(float *)&v44[2] = (float)(TargetVelocity_Z
                            - (float)((float)(TargetToLocalPlayer_DifferenceIn_Z * someScalingFactor_idk)
                                    * targetRelativeVelocity_idk))
                    * someScalingFactor_idk;
  RadarPrediction_237DE0(                       // the actual prediction function
                                                // 
    BallisticComputer_1DA0,
    someBool,
    (float *)v45,
    (float *)v44,
    TargetDistance,
    targetRelativeVelocity_idk,
    a3);
}