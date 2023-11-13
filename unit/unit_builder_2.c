__int64 __fastcall unit_builder_2(
        __int64 Unit,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  int v11; // r8d
  __int64 v12; // rax
  void *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rbx
  void *v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // rdx
  __int128 v19; // xmm7
  __int128 v20; // xmm6
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm8
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rdx
  void *v28; // rdx
  LONGLONG v29; // rax
  __int64 v30; // rax
  LONGLONG v31; // rax
  unsigned __int64 v32; // r15
  char *v33; // rdi
  unsigned __int64 v34; // rbp
  unsigned int v35; // eax
  int v36; // eax
  __int64 v37; // r14
  _OWORD *v38; // rbp
  int v39; // r8d
  _OWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rcx
  unsigned __int64 v45; // rbp
  unsigned int v46; // eax
  _OWORD *v47; // rbp
  _OWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *ThreadLocalStoragePointer; // rcx
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int128 v58; // xmm0
  __int64 v59; // rax
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // r15
  _QWORD *v62; // rcx
  LARGE_INTEGER *p_PerformanceCount; // rdi
  char *v64; // rdx
  char *v65; // rdx
  int v66; // r8d
  int v67; // r9d
  float v68; // xmm0_4
  unsigned int v69; // eax
  int v70; // r15d
  LONGLONG v71; // rax
  int v72; // edx
  unsigned __int64 v74; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-C8h] BYREF
  const char *v76; // [rsp+58h] [rbp-C0h]
  int v77; // [rsp+60h] [rbp-B8h]
  __int64 v78; // [rsp+68h] [rbp-B0h]
  char *Str; // [rsp+78h] [rbp-A0h] BYREF
  void *v80; // [rsp+80h] [rbp-98h]
  __int64 v81; // [rsp+88h] [rbp-90h]
  __int64 v82; // [rsp+90h] [rbp-88h]
  __int64 v83; // [rsp+98h] [rbp-80h]

  *Unit = &off_44C6130;
  *(Unit + 0x50) = off_44C6A00;
  v83 = a4;
  unit_builder(Unit, 5, a2, a5, Unit + 0x33C0, a4, a6, a7, 0x7Fu);
  *Unit = &off_44C6130;
  *(Unit + 0x50) = off_44C6A00;
  *(Unit + 0x3030) = (*(*off_4B678C0 + 0x18i64))(off_4B678C0, 0x4168i64);
  v12 = *(*(game + 0x440) + 0x9A8i64);
  *(Unit + 0x3038) = 0i64;
  v13 = off_4B678C0;
  *(Unit + 0x3040) = off_4B678C0;
  *(Unit + 0x3050) = 0;
  *(Unit + 0x3048) = 0i64;
  *(Unit + 0x3051) = *v12;
  *(Unit + 0x3052) = *(v12 + 1);
  *(Unit + 0x3053) = 0;
  *(Unit + 0x3054) = 0x200000002i64;
  *(Unit + 0x305C) = 0i64;
  *(Unit + 0x3064) = 0;
  v14 = *(v12 + 8);
  if ( v14 )
  {
    v15 = 0x10i64;
    if ( v14 >= 0x11 )
      v15 = v14;
    v16 = (*(*v13 + 0x18i64))(v13, v15);
    memmove(v16, *(Unit + 0x3038), *(Unit + 0x3048));
    if ( *(Unit + 0x3038) )
      (*(**(Unit + 0x3040) + 0x40i64))(*(Unit + 0x3040));
    *(Unit + 0x3038) = v16;
    *(Unit + 0x304C) = v15;
    v13 = off_4B678C0;
  }
  *(Unit + 0x3048) = v14;
  *(Unit + 0x3068) = 4;
  *(Unit + 0x306C) = 0;
  *(Unit + 0x3070) = 0;
  *(Unit + 0x3074) = 1;
  *(Unit + 0x3078) = 0i64;
  *(Unit + 0x3080) = v13;
  *(Unit + 0x30A0) = 0i64;
  *(Unit + 0x30B0) = 0i64;
  *(Unit + 0x3088) = 0i64;
  *(Unit + 0x3098) = 0;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_94;
  v17 = *(Unit + 0x18);
  v18 = (v17 + 0x18);
  if ( !v17 )
    v18 = (Unit + 0x10);
  *v18 = Unit + 0x30A0;
  *(Unit + 0x18) = Unit + 0x30A0;
  *(Unit + 0x30B8) = 0i64;
  *(Unit + 0x30A0) = 0x84;
  *(Unit + 0x30A8) = "shouldDieAndFlip";
  *(Unit + 0x30A2) = 0x80000;
  *(Unit + 0x30B0) = sub_36E440;
  *(Unit + 0x30C0) = 0;
  v19 = xmmword_44AB110;
  *(Unit + 0x30C8) = xmmword_44AB110;
  v20 = xmmword_449AE80;
  *(Unit + 0x30D8) = xmmword_449AE80;
  *(Unit + 0x30E8) = 0xFFFFFFFF;
  *(Unit + 0x30F0) = 0i64;
  *(Unit + 0x30F8) = v13;
  v21 = xmmword_44AB100;
  *(Unit + 0x3100) = xmmword_44AB100;
  *(Unit + 0x3110) = 0xFFFFFFFFi64;
  *(Unit + 0x3118) = 0;
  *(Unit + 0x3120) = 0i64;
  *(Unit + 0x3128) = v13;
  *(Unit + 0x3130) = 0i64;
  *(Unit + 0x3138) = 0x3F800000;
  *(Unit + 0x3140) = 0i64;
  *(Unit + 0x3148) = v13;
  *(Unit + 0x3150) = v21;
  *(Unit + 0x3160) = 0xFFFFFFFFi64;
  *(Unit + 0x3168) = 0;
  *(Unit + 0x3170) = 0i64;
  *(Unit + 0x3178) = v13;
  *(Unit + 0x3180) = 0i64;
  *(Unit + 0x3188) = 0;
  v22 = xmmword_44B1410;
  *(Unit + 0x318C) = xmmword_44B1410;
  v23 = xmmword_44C5F20;
  *(Unit + 0x319C) = xmmword_44C5F20;
  *(Unit + 0x31AC) = v22;
  *(Unit + 0x31BC) = 0i64;
  *(Unit + 0x31C4) = 0x3F800000;
  *(Unit + 0x31D8) = 0i64;
  *(Unit + 0x31C8) = 0i64;
  *(Unit + 0x31E8) = v22;
  *(Unit + 0x31F8) = xmmword_44A9010;
  *(Unit + 0x3208) = xmmword_44A0AE0;
  *(Unit + 0x3218) = 0x3F800000;
  *(Unit + 0x321C) = 0i64;
  *(Unit + 0x322C) = 0i64;
  *(Unit + 0x323C) = 0x3F800000;
  *(Unit + 0x3270) = 0i64;
  *(Unit + 0x3278) = 0;
  *(Unit + 0x3240) = 0i64;
  *(Unit + 0x3250) = 0i64;
  *(Unit + 0x325C) = 0i64;
  *(Unit + 0x326C) = 0x3F800000;
  *(Unit + 0x3280) = 0i64;
  *(Unit + 0x3288) = v13;
  *(Unit + 0x3290) = 0i64;
  *(Unit + 0x32A0) = v13;
  *(Unit + 0x32A8) = 0i64;
  *(Unit + 0x32B8) = 0i64;
  *(Unit + 0x32C0) = 0xBF800000;
  *(Unit + 0x32C4) = 0i64;
  *(Unit + 0x32D4) = 0i64;
  *(Unit + 0x32E4) = 0;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_94;
  *(Unit + 0x30B8) = Unit + 0x32C8;
  *(Unit + 0x18) = Unit + 0x32C8;
  *(Unit + 0x32C8) = 0x89;
  *(Unit + 0x32D0) = "isGrounded";
  *(Unit + 0x32CC) = 8;
  *(Unit + 0x32D8) = sub_36E440;
  *(Unit + 0x32E8) = 0;
  *(Unit + 0x32F0) = 0;
  *(Unit + 0x3310) = 0;
  *(Unit + 0x3318) = 0i64;
  *(Unit + 0x3320) = v13;
  *(Unit + 0x3328) = 0i64;
  *(Unit + 0x3330) = 1;
  *(Unit + 0x3334) = 1;
  *(Unit + 0x3338) = ymmword_4514980;
  *(Unit + 0x3358) = xmmword_45149A0;
  *(Unit + 0x3368) = 0;
  *(Unit + 0x336C) = xmmword_44C5F30;
  *(Unit + 0x337C) = 0xFFFFFFFFBF800000ui64;
  *(Unit + 0x3384) = xmmword_44C5F40;
  *(Unit + 0x3394) = xmmword_44C5F50;
  *(Unit + 0x33A4) = 0x3F70F0F13F5CDCDBi64;
  *(Unit + 0x33AC) = 0xFFFFFFFF3F800000ui64;
  *(Unit + 0x33B4) = 0xBF800000;
  *(Unit + 0x33B8) = 0i64;
  sub_8A07F0(Unit + 0x33C0, Unit);
  v24 = off_4B678C0;
  *(Unit + 0x38D8) = 0i64;
  *(Unit + 0x38E0) = v24;
  *(Unit + 0x38E8) = 0i64;
  *(Unit + 0x38F8) = 0i64;
  *(Unit + 0x3900) = v24;
  *(Unit + 0x3908) = 0i64;
  *(Unit + 0x3918) = 0i64;
  *(Unit + 0x3920) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x3928) = 0xFFFFFFFF;
  *(Unit + 0x392C) = 0i64;
  *(Unit + 0x3934) = xmmword_44C5F60;
  *(Unit + 0x3944) = 0;
  *(Unit + 0x3C3C) = 0xFFFFFFFF;
  *(Unit + 0x3C40) = xmmword_44A4120;
  *(Unit + 0x3C50) = 0x3F80000000000000i64;
  *(Unit + 0x3C58) = 0;
  *(Unit + 0x4068) = 0i64;
  *(Unit + 0x4058) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_94;
  v25 = Unit + 0x4058;
  v26 = *(Unit + 0x18);
  v27 = (v26 + 0x18);
  if ( !v26 )
    v27 = (Unit + 0x10);
  *v27 = v25;
  *(Unit + 0x18) = v25;
  *(Unit + 0x4070) = 0i64;
  *(Unit + 0x4058) = 0x87;
  *(Unit + 0x4060) = "timeToKraken";
  *(Unit + 0x405A) = 0x200020;
  *(Unit + 0x4068) = sub_158E050;
  *(Unit + 0x4078) = 0xBF800000;
  *(Unit + 0x4080) = 0i64;
  *(Unit + 0x4090) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_94;
  *(Unit + 0x4070) = Unit + 0x4080;
  *(Unit + 0x4080) = 0x88;
  *(Unit + 0x4088) = "curTriggerGroup";
  *(Unit + 0x4082) = 0x200800;
  *(Unit + 0x4090) = sub_158DEB0;
  *(Unit + 0x40A0) = 0;
  *(Unit + 0x40A8) = 0i64;
  *(Unit + 0x4098) = Unit + 0x40A8;
  *(Unit + 0x40A8) = 0x8A;
  *(Unit + 0x40B0) = "isSeparatedEnginesControl";
  *(Unit + 0x40AC) = 8;
  *(Unit + 0x40B8) = sub_36E440;
  *(Unit + 0x40C8) = 0;
  *(Unit + 0x40D0) = 0i64;
  *(Unit + 0x40C0) = Unit + 0x40D0;
  *(Unit + 0x40D0) = 0x95;
  *(Unit + 0x40D8) = "arePriSecTriggersCombined";
  *(Unit + 0x40D4) = 8;
  *(Unit + 0x40E0) = sub_36E440;
  *(Unit + 0x40F0) = 0;
  *(Unit + 0x40F8) = xmmword_44C5F70;
  *(Unit + 0x4108) = xmmword_44C5F80;
  *(Unit + 0x4118) = xmmword_44C5F90;
  *(Unit + 0x4128) = xmmword_44C5FA0;
  *(Unit + 0x4138) = xmmword_44C5FB0;
  *(Unit + 0x4148) = xmmword_44C5FC0;
  *(Unit + 0x4158) = xmmword_44C5FD0;
  *(Unit + 0x4168) = xmmword_44C5FE0;
  *(Unit + 0x4178) = xmmword_44C5FF0;
  *(Unit + 0x4188) = xmmword_44C6000;
  *(Unit + 0x4198) = xmmword_44C6010;
  *(Unit + 0x41A8) = 0x3F800000;
  *(Unit + 0x41B0) = 0i64;
  *(Unit + 0x41D8) = 0i64;
  *(Unit + 0x41C8) = 0i64;
  *(Unit + 0x41E8) = 0;
  *(Unit + 0x41E9) = 1;
  *(Unit + 0x41EC) = 0x3F800000;
  *(Unit + 0x41F0) = 0;
  *(Unit + 0x41F4) = 0xBF800000BF800000ui64;
  *(Unit + 0x4200) = 0i64;
  *(Unit + 0x421C) = 0;
  *(Unit + 0x4220) = 0i64;
  *(Unit + 0x4228) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x4230) = 0;
  *(Unit + 0x4238) = 0xBFF0000000000000ui64;
  *(Unit + 0x4268) = 0x3F800000;
  *(Unit + 0x4270) = 0i64;
  *(Unit + 0x40E8) = Unit + 0x4270;
  *(Unit + 0x18) = Unit + 0x4270;
  *(Unit + 0x4288) = 0i64;
  *(Unit + 0x4270) = 0x94;
  *(Unit + 0x4278) = "dummyVarForPatches";
  *(Unit + 0x4272) = 0x200020;
  *(Unit + 0x4280) = sub_8E3160;
  *(Unit + 0x4298) = 0i64;
  v28 = off_4B678C0;
  *(Unit + 0x42A0) = off_4B678C0;
  *(Unit + 0x42A8) = 0i64;
  *(Unit + 0x42B8) = xmmword_44C6020;
  *(Unit + 0x42C8) = xmmword_44C6030;
  *(Unit + 0x42D8) = dword_44A0284;
  *(Unit + 0x42E8) = xmmword_44C6040;
  *(Unit + 0x42F8) = xmmword_44C6050;
  *(Unit + 0x4308) = 0x3F800000i64;
  *(Unit + 0x4310) = 0xBF800000;
  *(Unit + 0x4320) = 0i64;
  *(Unit + 0x4328) = 0;
  *(Unit + 0x4330) = 0i64;
  *(Unit + 0x4338) = v28;
  *(Unit + 0x4340) = 0i64;
  *(Unit + 0x4348) = 1;
  *(Unit + 0x434C) = 0;
  *(Unit + 0x4350) = 0i64;
  *(Unit + 0x4358) = 0;
  *(Unit + 0x4370) = 0i64;
  *(Unit + 0x4360) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
  {
LABEL_94:
    v76 = Unit;
    PerformanceCount.LowPart = 5;
    LOBYTE(v11) = 1;
    log_err(
      "../../prog/gameLibs/publicInclude\\daNet/reflection.h",
      0x13F,
      v11,
      "Reflection: invalid object 0x%p",
      &PerformanceCount,
      1);
  }
  *(Unit + 0x4288) = Unit + 0x4360;
  *(Unit + 0x4360) = 0x8C;
  *(Unit + 0x4368) = "speedBoosterTime";
  *(Unit + 0x4364) = 0x20;
  *(Unit + 0x4370) = sub_158E050;
  *(Unit + 0x4380) = 0;
  *(Unit + 0x4388) = 0i64;
  *(Unit + 0x4378) = Unit + 0x4388;
  *(Unit + 0x4388) = 0x8D;
  *(Unit + 0x4390) = "speedBoosterCount";
  *(Unit + 0x438C) = 8;
  *(Unit + 0x4398) = sub_36E2B0;
  *(Unit + 0x43A8) = 0;
  *(Unit + 0x43B0) = 0i64;
  *(Unit + 0x43A0) = Unit + 0x43B0;
  *(Unit + 0x43B0) = 0x8E;
  *(Unit + 0x43B8) = "speedBoosterActivated";
  *(Unit + 0x43B4) = 8;
  *(Unit + 0x43C0) = sub_36E440;
  *(Unit + 0x43D0) = 0;
  *(Unit + 0x43D8) = 0i64;
  *(Unit + 0x43C8) = Unit + 0x43D8;
  *(Unit + 0x43D8) = 0x8F;
  *(Unit + 0x43E0) = "speedBoosterStartTime";
  *(Unit + 0x43DC) = 0x20;
  *(Unit + 0x43E8) = sub_158E050;
  *(Unit + 0x43F8) = 0;
  *(Unit + 0x4400) = 0i64;
  *(Unit + 0x43F0) = Unit + 0x4408;
  *(Unit + 0x4408) = 0x90;
  *(Unit + 0x4410) = "metapartsRepairProgress";
  *(Unit + 0x440C) = 0x20;
  *(Unit + 0x4418) = sub_158E050;
  *(Unit + 0x4428) = 0;
  *(Unit + 0x4430) = v19;
  *(Unit + 0x4440) = v20;
  *(Unit + 0x4450) = v20;
  *(Unit + 0x4460) = 0i64;
  *(Unit + 0x4420) = Unit + 0x4460;
  *(Unit + 0x4460) = 0x91;
  *(Unit + 0x4468) = "oxygenAmount";
  *(Unit + 0x4464) = 0x20;
  *(Unit + 0x4470) = sub_158E050;
  *(Unit + 0x4480) = 0xBF800000;
  *(Unit + 0x4488) = 1;
  *(Unit + 0x448C) = 0xBF800000i64;
  *(Unit + 0x4494) = 0x40A00000;
  *(Unit + 0x4498) = 0i64;
  *(Unit + 0x44A8) = 0i64;
  *(Unit + 0x4478) = Unit + 0x44A8;
  *(Unit + 0x44A8) = 0x93;
  *(Unit + 0x44B0) = "isAbovePeriscopeDepth";
  *(Unit + 0x44AC) = 8;
  *(Unit + 0x44B8) = sub_36E440;
  *(Unit + 0x44C8) = 1;
  *(Unit + 0x44D0) = 0;
  *(Unit + 0x44D8) = 0i64;
  *(Unit + 0x44C0) = Unit + 0x44D8;
  *(Unit + 0x44D8) = 0x8B;
  *(Unit + 0x44E0) = "isVeryFewCrew";
  *(Unit + 0x44DC) = 8;
  *(Unit + 0x44E8) = sub_36E440;
  *(Unit + 0x44F8) = 0;
  *(Unit + 0x4500) = 0i64;
  *(Unit + 0x44F0) = Unit + 0x4500;
  *(Unit + 0x18) = Unit + 0x4500;
  *(Unit + 0x4518) = 0i64;
  *(Unit + 0x4500) = 0x97;
  *(Unit + 0x4508) = "selectedEnemyBuoyancy";
  *(Unit + 0x4502) = 0x200020;
  *(Unit + 0x4510) = sub_158DEB0;
  *(Unit + 0x4520) = 0x64;
  *(Unit + 0x4528) = 0xBF800000;
  *(Unit + 0x4530) = 0i64;
  sub_15D6020(*(Unit + 0x3030), *(Unit + 0x3030) - (Unit + 0x50), *(Unit + 0x9E0));
  off_4A796D0(&PerformanceCount);
  v29 = PerformanceCount.QuadPart - qword_4B768B8;
  v82 = a3;
  if ( PerformanceCount.QuadPart - qword_4B768B8 >= 0x65DD0837000i64 )
  {
    v31 = (v29 / *&qword_4A796D8);
  }
  else
  {
    v30 = 0xF4240 * v29;
    if ( (Frequency.QuadPart | v30) >> 0x20 )
      v31 = v30 / Frequency.QuadPart;
    else
      v31 = v30 / Frequency.LowPart;
  }
  v32 = (0xDF3B645A1CAC0831ui64 * v31) >> 0x40;
  Str = 0i64;
  v81 = 0i64;
  v76 = a2;
  PerformanceCount.LowPart = 1;
  v80 = off_4B678C8;
  sub_1546EF0(&Str, v32, "gameData/units/%s.blk", &PerformanceCount, 1);
  if ( v81 )
  {
    v33 = Str;
    if ( Str )
      goto LABEL_23;
LABEL_38:
    v37 = 0xFFFFFFFFi64;
LABEL_40:
    v47 = j__malloc_base(0x90ui64);
    if ( !v47 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x90i64) )
        {
LABEL_93:
          v76 = &word_90;
          PerformanceCount.LowPart = 2;
          LOBYTE(v39) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v39,
            "Not enough memory to alloc %llu bytes",
            &PerformanceCount,
            1);
        }
        v48 = j__malloc_base(0x90ui64);
      }
      while ( !v48 );
      v47 = v48;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v47) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    v47[8] = 0i64;
    v47[7] = 0i64;
    v47[6] = 0i64;
    v47[5] = 0i64;
    v47[4] = 0i64;
    v47[3] = 0i64;
    v47[2] = 0i64;
    v47[1] = 0i64;
    *v47 = 0i64;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(ThreadLocalStoragePointer, v49, v50, v51);
    sub_14584E0(&PerformanceCount, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
    if ( !sub_A60A60(qword_4B176E8) )
      sub_1606B70(&PerformanceCount, v33, 0i64);
    if ( sub_A60A60(qword_4B176E8) )
      sub_564630(game, v33, 0i64);
    sub_8AFE60(v47, a2);
    v53 = qword_4B13728;
    if ( HIDWORD(qword_4B13728) == qword_4B13728 )
    {
      if ( HIDWORD(qword_4B13728) )
      {
        if ( HIDWORD(qword_4B13728) > 0x1FF )
          v74 = ((HIDWORD(qword_4B13728) + 1) >> 1) + HIDWORD(qword_4B13728);
        else
          v74 = 2i64 * HIDWORD(qword_4B13728);
      }
      else
      {
        v74 = 2i64;
      }
      sub_8E6100(v74);
      v53 = qword_4B13728;
    }
    LODWORD(qword_4B13728) = v53 + 1;
    *(qword_4B13718 + v53) = v47;
    goto LABEL_53;
  }
  v33 = &szFile;
  if ( !&szFile )
    goto LABEL_38;
LABEL_23:
  v34 = strlen(v33);
  v35 = sub_1285C0(v33, v34);
  v36 = sub_128A70(&qword_4B136C8, v33, v34, v35);
  if ( v36 < 0 )
  {
    v45 = strlen(v33);
    v46 = sub_1285C0(v33, v45);
    v37 = sub_127A00(&qword_4B136C8, v33, v45, v46);
    goto LABEL_40;
  }
  v37 = v36;
  if ( *(qword_4B13718 + v36) )
    goto LABEL_54;
  v38 = j__malloc_base(0x90ui64);
  if ( !v38 )
  {
    do
    {
      if ( !off_4B678A0 || !off_4B678A0(0x90i64) )
        goto LABEL_93;
      v40 = j__malloc_base(0x90ui64);
    }
    while ( !v40 );
    v38 = v40;
  }
  _InterlockedAdd(&dword_4B6788C, (j__msize(v38) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v38[8] = 0i64;
  v38[7] = 0i64;
  v38[6] = 0i64;
  v38[5] = 0i64;
  v38[4] = 0i64;
  v38[3] = 0i64;
  v38[2] = 0i64;
  v38[1] = 0i64;
  *v38 = 0i64;
  v44 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(v44[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(v44, v41, v42, v43);
  sub_14584E0(&PerformanceCount, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
  if ( !sub_A60A60(qword_4B176E8) )
    sub_1606B70(&PerformanceCount, v33, 0i64);
  if ( sub_A60A60(qword_4B176E8) )
    sub_564630(game, v33, 0i64);
  sub_8AFE60(v38, a2);
  *(qword_4B13718 + v37) = v38;
LABEL_53:
  sub_1458FF0(&PerformanceCount);
LABEL_54:
  v54 = *(qword_4B13718 + v37);
  *(Unit + 0x32B0) = v54;
  *(*(Unit + 0x3030) + 0x40A8i64) = *(v54 + 0x28);
  *(*(Unit + 0x3030) + 0x40B0i64) = *(*(Unit + 0x32B0) + 0x30i64);
  if ( a8 )
    sub_33E1C0(*(Unit + 0x6F0), a8);
  *(Unit + 0x3A0C) = v23;
  *(Unit + 0x3A34) = 0i64;
  *(Unit + 0x3A1C) = 0i64;
  *(Unit + 0x3A2C) = 0x3F80000000000000i64;
  memset((Unit + 0x3C5C), 0, 0x3FCui64);
  *(Unit + 0x323C) = 0xBF800000;
  *(Unit + 0x32F4) = 0i64;
  v58 = xmmword_44C6060;
  *(Unit + 0x4240) = xmmword_44C6060;
  *(Unit + 0x4250) = v58;
  *(Unit + 0x4260) = 0xBF800000FFFFFFFFui64;
  v59 = game;
  if ( *(*(game + 0x498) + 0x23B1i64) )
  {
    sub_1641100(
      &qword_4B71860,
      0i64,
      sub_8B18E0,
      Unit,
      "DelayedActionCB @\n\t..\\..\\skyquake\\prog\\technics\\warShip.cpp(614):");
    v59 = game;
  }
  v60 = v32 >> 0x3F;
  v61 = v32 >> 7;
  if ( !*(v59 + 0x67F) )
  {
    v62 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( !*(v62[TlsIndex] + 1i64) )
      _dyn_tls_on_demand_init(v62, v55, v56, v57);
    p_PerformanceCount = &PerformanceCount;
    sub_14584E0(&PerformanceCount, *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64));
    if ( !sub_A60A60(qword_4B176E8) )
    {
      if ( v81 )
        v64 = Str;
      else
        v64 = &szFile;
      sub_1606B70(&PerformanceCount, v64, 0i64);
    }
    if ( sub_A60A60(qword_4B176E8) )
    {
      if ( v81 )
        v65 = Str;
      else
        v65 = &szFile;
      p_PerformanceCount = sub_564630(game, v65, 0i64);
    }
    sub_8B31B0(Unit, p_PerformanceCount, v83, v82, 0, 0);
    if ( qword_4B74E20 )
    {
      v68 = Y;
      if ( *(*(Unit + 0x3030) + 0x402Ci64) )
        v68 = 0.0;
      v69 = sub_1773BA0(qword_4B74E20, &unk_44B4520, v66, v67, LODWORD(v68), 0);
    }
    else
    {
      v69 = 0xFFFFFFFF;
    }
    *(Unit + 0x3C3C) = v69;
    sub_893BF0(Unit, p_PerformanceCount);
    sub_1458FF0(&PerformanceCount);
  }
  *(*(Unit + 0x3030) + 0x3B20i64) = *(HudInfo + 0x12F);
  if ( Str )
    (*(*v80 + 0x40i64))(v80);
  v70 = v60 + v61;
  off_4A796D0(&PerformanceCount);
  v71 = PerformanceCount.QuadPart - qword_4B768B8;
  if ( PerformanceCount.QuadPart - qword_4B768B8 >= 0x65DD0837000i64 )
  {
    LODWORD(v71) = (v71 / *&qword_4A796D8);
  }
  else
  {
    v71 *= 0xF4240i64;
    if ( (Frequency.QuadPart | v71) >> 0x20 )
      v71 /= Frequency.QuadPart;
    else
      LODWORD(v71) = v71 / Frequency.LowPart;
  }
  v72 = v70 + v71 / 0x3E8;
  if ( v72 >= 0x64 )
  {
    v76 = "WarShipModel";
    PerformanceCount.LowPart = 1;
    v78 = v72;
    v77 = 2;
    dg_debug(0x2047414Cu, "WARNING: %s lag timeout %dms", &PerformanceCount, 2);
  }
  return Unit;
}
