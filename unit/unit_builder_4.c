__int64 __fastcall unit_builder_4(
        __int64 Unit,
        __int16 a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        __int16 a7,
        char a8)
{
  void *v9; // rax
  void *v10; // rax
  __int128 v11; // xmm6
  void *v12; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  void *v16; // rbx
  int v17; // r8d
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rbp
  void *v26; // rax
  void *v27; // rax
  __int128 v28; // xmm8
  void *v29; // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // rax
  void *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rbp
  void *v36; // rcx
  __int64 v37; // rbp
  unsigned __int8 v38; // bl
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  _DWORD *v41; // rbx
  _DWORD *v42; // rax
  void *v43; // rax
  _OWORD *v44; // rbx
  _OWORD *v45; // rax
  int v46; // eax
  int v47; // ecx
  CHAR *v48; // rdx
  CHAR *v49; // rdx
  __int16 v50; // ax
  __int64 *v51; // rbx
  const char *v52; // rdx
  double v53; // xmm0_8
  double v54; // xmm0_8
  double v55; // xmm0_8
  __int64 v56; // rbx
  unsigned int v57; // eax
  int v58; // ecx
  unsigned __int8 v59; // cf
  __int64 v60; // rcx
  char v61; // cl
  int v62; // eax
  int Src; // [rsp+30h] [rbp-158h] BYREF
  __int128 v65; // [rsp+34h] [rbp-154h]
  int v66; // [rsp+44h] [rbp-144h]
  __int64 v67; // [rsp+48h] [rbp-140h]
  __int128 v68; // [rsp+50h] [rbp-138h]
  int v69; // [rsp+60h] [rbp-128h]
  _BYTE v70[12]; // [rsp+64h] [rbp-124h]
  __int128 v71; // [rsp+70h] [rbp-118h]
  __int64 v72; // [rsp+80h] [rbp-108h]
  int v73; // [rsp+88h] [rbp-100h]
  __int16 v74; // [rsp+8Ch] [rbp-FCh]
  __int64 v75; // [rsp+90h] [rbp-F8h]
  __int128 v76; // [rsp+98h] [rbp-F0h]
  int v77; // [rsp+A8h] [rbp-E0h]
  __int16 v78; // [rsp+ACh] [rbp-DCh]
  __int128 v79; // [rsp+B0h] [rbp-D8h]
  __int64 v80; // [rsp+C0h] [rbp-C8h]
  int v81; // [rsp+C8h] [rbp-C0h]
  char v82; // [rsp+CCh] [rbp-BCh]
  _BYTE v83[19]; // [rsp+CDh] [rbp-BBh]
  __int64 v84; // [rsp+E0h] [rbp-A8h]
  int v85; // [rsp+ECh] [rbp-9Ch]
  __int64 v86; // [rsp+F0h] [rbp-98h]
  _BYTE v87[19]; // [rsp+FDh] [rbp-8Bh]

  *(Unit + 8) = a7;
  *(Unit + 0x10) = 0i64;
  *(Unit + 0x20) = 0x54454E44;
  *(Unit + 0x28) = 0i64;
  *(Unit + 0x30) = 0i64;
  *(Unit + 0x38) = 0i64;
  *(Unit + 0x40) = 0i64;
  *(Unit + 0x48) = 0xA;
  *(Unit + 0x88) = 0i64;
  v9 = off_4B678C0;
  *(Unit + 0x90) = off_4B678C0;
  *(Unit + 0x98) = 0i64;
  *(Unit + 0xA8) = v9;
  *(Unit + 0xB0) = 0i64;
  *(Unit + 0xC0) = v9;
  *(Unit + 0xC8) = 0i64;
  *(Unit + 0xD8) = v9;
  *(Unit + 0xE0) = 0i64;
  *(Unit + 0xF0) = v9;
  *(Unit + 0xF8) = 0i64;
  *(Unit + 0x58) = 0;
  *(Unit + 0x60) = 0;
  *(Unit + 0x64) = 0xBF800000i64;
  v10 = off_4B678B0;
  *(Unit + 0x70) = 0i64;
  *(Unit + 0x80) = v10;
  *(Unit + 0x108) = 0i64;
  *(Unit + 0x118) = 0i64;
  *Unit = &off_44AB3C0;
  *(Unit + 0x50) = &off_44AB8A0;
  *(Unit + 0x120) = 0xFFFFFFFF;
  *(Unit + 0x124) = 1;
  *(Unit + 0x128) = 0;
  *(Unit + 0x12C) = 0;
  *(Unit + 0x130) = unk_44A4110;
  *(Unit + 0x140) = 0;
  *(Unit + 0x144) = 0i64;
  *(Unit + 0x154) = 0;
  *(Unit + 0x158) = 0i64;
  *(Unit + 0x168) = 0;
  *(Unit + 0x178) = 0i64;
  *(Unit + 0x16C) = 0i64;
  *(Unit + 0x10) = Unit + 0x180;
  *(Unit + 0x18) = Unit + 0x180;
  *(Unit + 0x198) = 0i64;
  *(Unit + 0x180) = 0x21;
  *(Unit + 0x188) = "isAlternativeShotFreq";
  *(Unit + 0x182) = 0x80020;
  *(Unit + 0x190) = sub_36E440;
  *(Unit + 0x1A0) = 0;
  *(Unit + 0x1A8) = 0i64;
  *(Unit + 0x1B8) = 0;
  *(Unit + 0x1BC) = 0xBF800000BF800000ui64;
  *(Unit + 0x1C4) = 0;
  *(Unit + 0x1C8) = 0i64;
  *(Unit + 0x1D8) = 0i64;
  *(Unit + 0x1E8) = 0i64;
  *(Unit + 0x1F0) = xmmword_44A8DF0;
  *(Unit + 0x200) = xmmword_44AB0D0;
  *(Unit + 0x210) = xmmword_44AB0E0;
  *(Unit + 0x220) = 0i64;
  *(Unit + 0x228) = 0;
  *(Unit + 0x230) = 0i64;
  *(Unit + 0x238) = LODWORD(Y);
  *(Unit + 0x248) = xmmword_44AB0F0;
  *(Unit + 0x258) = _mm_load_si128(&xmmword_44A0AE0);
  *(Unit + 0x268) = 0;
  *(Unit + 0x26C) = 0x3F800000i64;
  *(Unit + 0x278) = 0i64;
  *(Unit + 0x280) = 0xBF800000BF800000ui64;
  *(Unit + 0x28C) = 0;
  *(Unit + 0x28E) = 0;
  *(Unit + 0x290) = 0xFFFFFFFF;
  *(Unit + 0x294) = 0;
  *(Unit + 0x298) = 0;
  *(Unit + 0x29C) = 0;
  *(Unit + 0x2A0) = 0xBF800000;
  *(Unit + 0x2A8) = 0xA;
  *(Unit + 0x2B0) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x348) = 0i64;
  *(Unit + 0x2AC) = 0xFFFFFFFF;
  *(Unit + 0x2C0) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x2C8) = 0i64;
  *(Unit + 0x2D8) = 0x10;
  *(Unit + 0x2E4) = 0;
  *(Unit + 0x2DC) = 0i64;
  *(Unit + 0x308) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x304) = 0xFFFF;
  *(Unit + 0x310) = 0;
  *(Unit + 0x324) = 0xFFFF;
  v11 = xmmword_44A8E10;
  *(Unit + 0x2EC) = xmmword_44A8E10;
  *(Unit + 0x328) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x314) = 0i64;
  *(Unit + 0x2FC) = 0x7FFFFFFFFFFFFFFFi64;
  *(Unit + 0x2E8) = 0;
  *(Unit + 0x330) = 0i64;
  *(Unit + 0x338) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x344) = 0;
  *(Unit + 0x340) = 0xFFFFFFFF;
  *(Unit + 0x358) = 0xA;
  *(Unit + 0x360) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x3F8) = 0i64;
  *(Unit + 0x35C) = 0xFFFFFFFF;
  *(Unit + 0x370) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x378) = 0i64;
  *(Unit + 0x388) = 0x10;
  *(Unit + 0x38C) = 0i64;
  *(Unit + 0x394) = 0;
  *(Unit + 0x3B8) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x3B4) = 0xFFFF;
  *(Unit + 0x3C0) = 0;
  *(Unit + 0x3D4) = 0xFFFF;
  *(Unit + 0x39C) = v11;
  *(Unit + 0x3D8) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x3C4) = 0i64;
  *(Unit + 0x3AC) = 0x7FFFFFFFFFFFFFFFi64;
  *(Unit + 0x398) = 0;
  *(Unit + 0x3E0) = 0i64;
  *(Unit + 0x3E8) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x3F4) = 0;
  *(Unit + 0x3F0) = 0xFFFFFFFF;
  *(Unit + 0x408) = 0xA;
  *(Unit + 0x410) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x4A8) = 0i64;
  *(Unit + 0x40C) = 0xFFFFFFFF;
  *(Unit + 0x420) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x428) = 0i64;
  *(Unit + 0x438) = 0x10;
  *(Unit + 0x43C) = 0i64;
  *(Unit + 0x444) = 0;
  *(Unit + 0x468) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x464) = 0xFFFF;
  *(Unit + 0x470) = 0;
  *(Unit + 0x484) = 0xFFFF;
  *(Unit + 0x44C) = v11;
  *(Unit + 0x48C) = 0xFFFFFFFF;
  *(Unit + 0x488) = 0;
  *(Unit + 0x474) = 0i64;
  *(Unit + 0x45C) = 0x7FFFFFFFFFFFFFFFi64;
  *(Unit + 0x448) = 0;
  *(Unit + 0x494) = 0;
  *(Unit + 0x490) = 0;
  *(Unit + 0x498) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x4A4) = 0;
  *(Unit + 0x4A0) = 0xFFFFFFFF;
  *(Unit + 0x4C8) = 0i64;
  *(Unit + 0x4B8) = 0i64;
  v12 = off_4B678C0;
  *(Unit + 0x4D8) = off_4B678C0;
  *(Unit + 0x4F0) = 0i64;
  *(Unit + 0x500) = 0i64;
  *(Unit + 0x4E0) = 0i64;
  *(Unit + 0x4E8) = 0;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  v85 = a3;
  LODWORD(v84) = a4;
  v14 = *(Unit + 0x18);
  v15 = (v14 + 0x18);
  if ( !v14 )
    v15 = (Unit + 0x10);
  *v15 = Unit + 0x4F0;
  *(Unit + 0x18) = Unit + 0x4F0;
  *(Unit + 0x508) = 0i64;
  *(Unit + 0x4F0) = 0x36;
  *(Unit + 0x4F8) = "brokenTurretDriveJammedTime";
  *(Unit + 0x4F2) = 0x400000;
  *(Unit + 0x500) = sub_158DAC0;
  *(Unit + 0x510) = 0x40A0000040A00000i64;
  *(Unit + 0x518) = 0i64;
  *(Unit + 0x528) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  *(Unit + 0x508) = Unit + 0x518;
  *(Unit + 0x518) = 0x37;
  *(Unit + 0x520) = "brokenTurretDriveSpeed";
  *(Unit + 0x51C) = 0x20;
  *(Unit + 0x528) = sub_158E050;
  *(Unit + 0x538) = 0x40000000;
  *(Unit + 0x540) = 0i64;
  *(Unit + 0x530) = Unit + 0x540;
  *(Unit + 0x540) = 0x38;
  *(Unit + 0x548) = "brokenTurretDriveMult";
  *(Unit + 0x544) = 0x20;
  *(Unit + 0x550) = sub_158E050;
  *(Unit + 0x560) = 0x3F800000;
  *(Unit + 0x568) = 0i64;
  *(Unit + 0x558) = Unit + 0x568;
  *(Unit + 0x568) = 0x39;
  *(Unit + 0x570) = "isBreechDamaged";
  *(Unit + 0x56C) = 8;
  *(Unit + 0x578) = sub_36E440;
  *(Unit + 0x588) = 0;
  *(Unit + 0x590) = 0i64;
  *(Unit + 0x580) = Unit + 0x590;
  *(Unit + 0x590) = 0x3A;
  *(Unit + 0x598) = "hasModuleEffectsToRepair";
  *(Unit + 0x594) = 8;
  *(Unit + 0x5A0) = sub_36E440;
  *(Unit + 0x5B0) = 0;
  *(Unit + 0x5B8) = 0i64;
  *(Unit + 0x5A8) = Unit + 0x5B8;
  *(Unit + 0x5B8) = 0x3B;
  *(Unit + 0x5C0) = "moduleEffectsRepairAtTime";
  *(Unit + 0x5BC) = 0x20;
  *(Unit + 0x5C8) = sub_158E050;
  *(Unit + 0x5D8) = 0xBF800000;
  *(Unit + 0x5E0) = 0xFFFFFFFF;
  *(Unit + 0x5E8) = 0i64;
  *(Unit + 0x5F0) = v12;
  *(Unit + 0x5F8) = 0i64;
  *(Unit + 0x5D0) = Unit + 0x600;
  *(Unit + 0x600) = 0x28;
  *(Unit + 0x608) = "curNightVisionMode";
  *(Unit + 0x602) = 0x200020;
  *(Unit + 0x610) = sub_158DEB0;
  *(Unit + 0x620) = 0xFFFFFFFF;
  *(Unit + 0x628) = 0xFFFFFFFF;
  *(Unit + 0x630) = 0i64;
  *(Unit + 0x618) = Unit + 0x630;
  *(Unit + 0x630) = 2;
  *(Unit + 0x638) = "dummyVarForCrewLayout";
  *(Unit + 0x632) = 0x200020;
  *(Unit + 0x640) = sub_35CF30;
  *(Unit + 0x658) = 0i64;
  *(Unit + 0x648) = Unit + 0x658;
  *(Unit + 0x18) = Unit + 0x658;
  *(Unit + 0x670) = 0i64;
  *(Unit + 0x658) = 5;
  *(Unit + 0x660) = "dummyVarForMissionAddText";
  *(Unit + 0x65A) = 0x200020;
  *(Unit + 0x668) = sub_35CF60;
  *(Unit + 0x680) = 0xBF800000i64;
  *(Unit + 0x688) = 0;
  *(Unit + 0x6E4) = 0xFFFFFFFFFFFFFFFFui64;
  v16 = j__malloc_base(0x1F0ui64);
  if ( !v16 )
  {
    while ( off_4B678A0 && off_4B678A0(0x1F0i64) )
    {
      v18 = j__malloc_base(0x1F0ui64);
      if ( v18 )
      {
        v16 = v18;
        goto LABEL_10;
      }
    }
    *(&v65 + 4) = 0x1F0i64;
LABEL_81:
    Src = 2;
    LOBYTE(v17) = 1;
    log_err("..\\..\\prog\\engine2\\memory\\dagmem.cpp", 0x345, v17, "Not enough memory to alloc %llu bytes", &Src, 1);
  }
LABEL_10:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v16) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  sub_488E70(v16, a7 & 0x7FF);
  *(Unit + 0x6F0) = v16;
  *(Unit + 0x6F8) = 0i64;
  *(Unit + 0x708) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  v19 = Unit + 0x6F8;
  v20 = *(Unit + 0x18);
  v21 = (v20 + 0x18);
  if ( !v20 )
    v21 = (Unit + 0x10);
  *v21 = v19;
  *(Unit + 0x18) = v19;
  *(Unit + 0x710) = 0i64;
  *(Unit + 0x6F8) = 0x31;
  *(Unit + 0x700) = "supportPlanesCount";
  *(Unit + 0x6FA) = 0x200020;
  *(Unit + 0x708) = sub_158DEB0;
  *(Unit + 0x718) = 0;
  *(Unit + 0x720) = 0i64;
  *(Unit + 0x730) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  *(Unit + 0x710) = Unit + 0x720;
  *(Unit + 0x720) = 0x32;
  *(Unit + 0x728) = "supportPlaneCatapultsFuseMask";
  *(Unit + 0x724) = 8;
  *(Unit + 0x730) = sub_36E2B0;
  *(Unit + 0x740) = 0;
  *(Unit + 0x748) = 0xBF800000;
  *(Unit + 0x74C) = 0;
  *(Unit + 0x750) = 0i64;
  *(Unit + 0x738) = Unit + 0x750;
  *(Unit + 0x750) = 6;
  *(Unit + 0x758) = "visualReloadProgress";
  *(Unit + 0x754) = 8;
  *(Unit + 0x760) = sub_36E2B0;
  *(Unit + 0x770) = 0;
  *(Unit + 0x778) = 0i64;
  *(Unit + 0x768) = Unit + 0x778;
  *(Unit + 0x778) = 7;
  *(Unit + 0x780) = "briefMalfunctionState";
  *(Unit + 0x77C) = 8;
  *(Unit + 0x788) = sub_36E2B0;
  *(Unit + 0x798) = 0;
  *(Unit + 0x7A0) = 0i64;
  *(Unit + 0x790) = Unit + 0x7A0;
  *(Unit + 0x7A0) = 8;
  *(Unit + 0x7A8) = "bombDelayExplosion";
  *(Unit + 0x7A4) = 0x20;
  *(Unit + 0x7B0) = sub_158E050;
  *(Unit + 0x7C0) = 0;
  *(Unit + 0x7C8) = 0i64;
  *(Unit + 0x7B8) = Unit + 0x7C8;
  *(Unit + 0x7C8) = 9;
  *(Unit + 0x7D0) = "delayWithFlightTime";
  *(Unit + 0x7CC) = 8;
  *(Unit + 0x7D8) = sub_36E440;
  *(Unit + 0x7E8) = 0;
  *(Unit + 0x7F0) = 0i64;
  *(Unit + 0x7E0) = Unit + 0x7F0;
  *(Unit + 0x7F0) = 0xA;
  *(Unit + 0x7F8) = "rocketFuseDist";
  *(Unit + 0x7F4) = 0x20;
  *(Unit + 0x800) = sub_158E050;
  *(Unit + 0x810) = 0;
  *(Unit + 0x818) = 0i64;
  *(Unit + 0x808) = Unit + 0x818;
  *(Unit + 0x818) = 0x2C;
  *(Unit + 0x820) = "torpedoDiveDepth";
  *(Unit + 0x81C) = 0x20;
  *(Unit + 0x828) = sub_158E050;
  *(Unit + 0x838) = 0x3F800000;
  *(Unit + 0x840) = 0i64;
  *(Unit + 0x848) = 0xFFFF;
  *(Unit + 0x84C) = 0;
  *(Unit + 0x850) = 0i64;
  *(Unit + 0x830) = Unit + 0x850;
  *(Unit + 0x850) = 0xB;
  *(Unit + 0x858) = "dummyForDeathInfo";
  *(Unit + 0x854) = 0x20;
  *(Unit + 0x860) = sub_349FE0;
  *(Unit + 0x878) = 0xBF800000;
  *(Unit + 0x880) = 0i64;
  *(Unit + 0x868) = Unit + 0x888;
  *(Unit + 0x888) = 0xC;
  *(Unit + 0x890) = "lastContactFrom";
  *(Unit + 0x88C) = 0x60;
  *(Unit + 0x898) = sub_158DAC0;
  *(Unit + 0x8B0) = 0;
  *(Unit + 0x8A8) = 0i64;
  *(Unit + 0x8B8) = 0i64;
  *(Unit + 0x8A0) = Unit + 0x8B8;
  *(Unit + 0x18) = Unit + 0x8B8;
  *(Unit + 0x8D0) = 0i64;
  *(Unit + 0x8B8) = 0xD;
  *(Unit + 0x8C0) = "lastContactTo";
  *(Unit + 0x8BC) = 0x60;
  *(Unit + 0x8C8) = sub_158DAC0;
  *(Unit + 0x8E0) = 0;
  *(Unit + 0x8D8) = 0i64;
  *(Unit + 0x8F8) = 0i64;
  *(Unit + 0x8E8) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  *(Unit + 0x8D0) = Unit + 0x8E8;
  *(Unit + 0x8E8) = 0x1F;
  *(Unit + 0x8F0) = "lastContactTime";
  *(Unit + 0x8EC) = 0x20;
  *(Unit + 0x8F8) = sub_158E050;
  *(Unit + 0x908) = 0;
  *(Unit + 0x910) = 0i64;
  *(Unit + 0x900) = Unit + 0x910;
  *(Unit + 0x910) = 0xE;
  *(Unit + 0x918) = "lastContactTimeRel";
  *(Unit + 0x914) = 0x20;
  *(Unit + 0x920) = sub_158E050;
  *(Unit + 0x930) = 0;
  *(Unit + 0x938) = 0i64;
  *(Unit + 0x928) = Unit + 0x938;
  *(Unit + 0x938) = 0x2B;
  *(Unit + 0x940) = "allowBailout";
  *(Unit + 0x93A) = 0x80020;
  *(Unit + 0x948) = sub_36E440;
  *(Unit + 0x958) = 1;
  *(Unit + 0x960) = 0xBF800000;
  dword_4A79158 = 0x41C64E6D * dword_4A79158 + 0x3039;
  *(Unit + 0x968) = (HIWORD(dword_4A79158) & 0x7FFF) * *&dword_44A0140;
  *(Unit + 0x96C) = 0i64;
  *(Unit + 0x978) = 0i64;
  *(Unit + 0x988) = 0xBF800000;
  *(Unit + 0x990) = 0i64;
  *(Unit + 0x998) = 0xFF;
  *(Unit + 0x99C) = ymmword_4514980;
  *(Unit + 0x9BC) = xmmword_45149A0;
  *(Unit + 0x9D0) = 0i64;
  *(Unit + 0x9E0) = 0i64;
  *(Unit + 0x9F0) = 0i64;
  *(Unit + 0x950) = Unit + 0x9F0;
  *(Unit + 0x9F0) = 0xF;
  *(Unit + 0x9F8) = "repairAssistee";
  *(Unit + 0x9F2) = 0x400020;
  *(Unit + 0xA00) = sub_744290;
  *(Unit + 0xA10) = 0i64;
  *(Unit + 0xA20) = 0i64;
  *(Unit + 0xA08) = Unit + 0xA20;
  *(Unit + 0xA20) = 0x10;
  *(Unit + 0xA28) = "repairAssistant";
  *(Unit + 0xA22) = 0x400020;
  *(Unit + 0xA30) = sub_744290;
  *(Unit + 0xA40) = 0i64;
  *(Unit + 0xA50) = 0i64;
  *(Unit + 0xA38) = Unit + 0xA50;
  *(Unit + 0xA50) = 0x2D;
  *(Unit + 0xA58) = "extinguishAssistee";
  *(Unit + 0xA52) = 0x400020;
  *(Unit + 0xA60) = sub_744290;
  *(Unit + 0xA70) = 0i64;
  *(Unit + 0xA80) = 0i64;
  *(Unit + 0xA68) = Unit + 0xA80;
  *(Unit + 0x18) = Unit + 0xA80;
  *(Unit + 0xA98) = 0i64;
  *(Unit + 0xA80) = 0x2E;
  *(Unit + 0xA88) = "extinguishAssistant";
  *(Unit + 0xA82) = 0x400020;
  *(Unit + 0xA90) = sub_744290;
  *(Unit + 0xAA0) = 0i64;
  sub_7A6F20(Unit + 0xAB0, Unit);
  *(Unit + 0xFA0) = 0xBF80000000000000ui64;
  *(Unit + 0xFA8) = 0i64;
  *(Unit + 0xFB8) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  v22 = Unit + 0xFA8;
  v23 = *(Unit + 0x18);
  v24 = (v23 + 0x18);
  if ( !v23 )
    v24 = (Unit + 0x10);
  *v24 = v22;
  *(Unit + 0x18) = v22;
  *(Unit + 0xFC0) = 0i64;
  *(Unit + 0xFA8) = 0x11;
  *(Unit + 0xFB0) = "invulnerable";
  *(Unit + 0xFAA) = 0x80000;
  *(Unit + 0xFB8) = sub_36E440;
  *(Unit + 0xFC8) = 0;
  *(Unit + 0xFD0) = 0i64;
  *(Unit + 0xFE0) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  *(Unit + 0xFC0) = Unit + 0xFD0;
  *(Unit + 0xFD0) = 0x12;
  *(Unit + 0xFD8) = "enableGunners";
  *(Unit + 0xFD2) = 0x80020;
  *(Unit + 0xFE0) = sub_36E2B0;
  *(Unit + 0xFF8) = 0;
  *(Unit + 0x1000) = 0i64;
  *(Unit + 0xFE8) = Unit + 0x1000;
  *(Unit + 0x1000) = 0x13;
  *(Unit + 0x1008) = "vulnerableByUnitUId";
  *(Unit + 0x1004) = 0x20;
  *(Unit + 0x1010) = sub_158DEB0;
  *(Unit + 0x1020) = 0xFFFFFFFF;
  *(Unit + 0x1028) = 0;
  *(Unit + 0x1030) = 0i64;
  v86 = Unit + 0x1030;
  *(Unit + 0x1018) = Unit + 0x1030;
  *(Unit + 0x1030) = 0x14;
  *(Unit + 0x1038) = "dummyForUnitFlags";
  *(Unit + 0x1034) = 0x20;
  *(Unit + 0x1040) = sub_33BE90;
  *(Unit + 0x1058) = v85;
  *(Unit + 0x1060) = 0i64;
  *(Unit + 0x1048) = Unit + 0x1060;
  *(Unit + 0x1060) = 0x15;
  *(Unit + 0x1068) = "lowRateUnitFlags";
  *(Unit + 0x1064) = 0x20;
  *(Unit + 0x1070) = sub_158DEB0;
  *(Unit + 0x1080) = v84;
  *(Unit + 0x1088) = 0i64;
  *(Unit + 0x1078) = Unit + 0x1088;
  *(Unit + 0x1088) = 0x16;
  *(Unit + 0x1090) = "unitState";
  *(Unit + 0x108A) = 0x100020;
  *(Unit + 0x1098) = sub_36E370;
  *(Unit + 0x10A8) = 0;
  *(Unit + 0x10B0) = a2;
  *(Unit + 0x10B8) = 0i64;
  *(Unit + 0x10C8) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x10D8) = 0;
  *(Unit + 0x10D0) = 0i64;
  *(Unit + 0x10E0) = 0i64;
  *(Unit + 0x10E8) = 0;
  *(Unit + 0x10F0) = 0i64;
  v84 = Unit + 0x10F0;
  *(Unit + 0x10A0) = Unit + 0x10F0;
  *(Unit + 0x10F0) = 0x17;
  *(Unit + 0x10F8) = "unitArmyNo";
  *(Unit + 0x10F4) = 8;
  *(Unit + 0x1100) = sub_36E2B0;
  *(Unit + 0x1110) = a5;
  *(Unit + 0x1118) = a6;
  *(Unit + 0x111A) = 0xFFFF;
  *(Unit + 0x111C) = 0i64;
  *(Unit + 0x112C) = 0;
  *(Unit + 0x1130) = 0x3F800000;
  *(Unit + 0x1138) = 0i64;
  *(Unit + 0x1148) = 0i64;
  *(Unit + 0x1108) = Unit + 0x1150;
  *(Unit + 0x1150) = 0x18;
  *(Unit + 0x1158) = "stealthRadiusSq";
  *(Unit + 0x1154) = 0x20;
  *(Unit + 0x1160) = sub_158E050;
  *(Unit + 0x1170) = 0;
  *(Unit + 0x1178) = 0i64;
  *(Unit + 0x1168) = Unit + 0x1178;
  *(Unit + 0x18) = Unit + 0x1178;
  *(Unit + 0x1190) = 0i64;
  *(Unit + 0x1178) = 0x19;
  *(Unit + 0x1180) = "stealthArmyMask";
  *(Unit + 0x117C) = 8;
  *(Unit + 0x1188) = sub_36E2B0;
  *(Unit + 0x1198) = 0;
  *(Unit + 0x11A0) = 0i64;
  *(Unit + 0x11B0) = 0i64;
  *(Unit + 0x11B8) = 0xBF800000;
  *(Unit + 0x11C0) = 0i64;
  *(Unit + 0x11D0) = 0i64;
  *(Unit + 0x11F8) = Unit + 0x1200;
  *(Unit + 0x11E0) = Unit + 0x1200;
  *(Unit + 0x11D8) = Unit + 0x1200;
  v25 = Unit + 0x1220;
  *(Unit + 0x11E8) = Unit + 0x1220;
  *(Unit + 0x1220) = a2 == 0;
  *(Unit + 0x1228) = 0i64;
  v26 = off_4B678C0;
  *(Unit + 0x1230) = off_4B678C0;
  *(Unit + 0x1238) = xmmword_44A0AF0;
  *(Unit + 0x1248) = 0i64;
  *(Unit + 0x1258) = 0i64;
  *(Unit + 0x1260) = 0xFFFFFFFF;
  *(Unit + 0x1268) = 0i64;
  *(Unit + 0x1270) = v26;
  *(Unit + 0x1278) = xmmword_44AB100;
  *(Unit + 0x1288) = 0i64;
  *(Unit + 0x1290) = 0x3F800000i64;
  *(Unit + 0x1298) = 0;
  *(Unit + 0x129E) = 0i64;
  *(Unit + 0x12AE) = 0i64;
  *(Unit + 0x12BE) = 0i64;
  *(Unit + 0x12C8) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  *(Unit + 0x1190) = Unit + 0x12B8;
  *(Unit + 0x12B8) = 0x1A;
  *(Unit + 0x12C0) = "scoutStartTime";
  *(Unit + 0x12BC) = 0x20;
  *(Unit + 0x12C8) = sub_158E050;
  *(Unit + 0x12D8) = 0xBF800000;
  *(Unit + 0x12E0) = 0i64;
  *(Unit + 0x12D0) = Unit + 0x12E0;
  *(Unit + 0x18) = Unit + 0x12E0;
  *(Unit + 0x12F8) = 0i64;
  *(Unit + 0x12E0) = 0x1B;
  *(Unit + 0x12E8) = "scoutCooldown";
  *(Unit + 0x12E4) = 0x20;
  *(Unit + 0x12F0) = sub_158E050;
  *(Unit + 0x1300) = 0x3F800000;
  *(Unit + 0x1308) = 0xBF800000;
  *(Unit + 0x130C) = 0i64;
  *(Unit + 0x1311) = 0i64;
  *(Unit + 0x131C) = 0xFFFFFFFF;
  *(Unit + 0x1320) = 0;
  *(Unit + 0x1322) = 0;
  *(Unit + 0x1323) = 0;
  *(Unit + 0x1328) = 0i64;
  sub_14584E0(Unit + 0x1330, off_4B678B0);
  *(Unit + 0x1350) = 0i64;
  v27 = off_4B678C0;
  *(Unit + 0x1358) = off_4B678C0;
  *(Unit + 0x1360) = 0i64;
  *(Unit + 0x1370) = v27;
  *(Unit + 0x1378) = xmmword_44AB110;
  *(Unit + 0x1388) = 0;
  *(Unit + 0x1390) = 0i64;
  *(Unit + 0x13A0) = 0i64;
  *(Unit + 0x13A8) = v27;
  *(Unit + 0x13B0) = 0i64;
  *(Unit + 0x13C0) = v27;
  *(Unit + 0x13C8) = xmmword_44A8FE0;
  *(Unit + 0x13D8) = 0xFFFFFFFF;
  *(Unit + 0x13DC) = 0;
  *(Unit + 0x13E0) = 0x3F800000;
  *(Unit + 0x13E8) = 0i64;
  *(Unit + 0x13F0) = v27;
  *(Unit + 0x1400) = 0;
  *(Unit + 0x13F8) = 0i64;
  *(Unit + 0x1404) = xmmword_44AB120;
  v28 = xmmword_44A01E0;
  *(Unit + 0x1414) = xmmword_44A01E0;
  *(Unit + 0x1424) = xmmword_44AAC90;
  *(Unit + 0x144C) = 0i64;
  *(Unit + 0x1454) = 0;
  *(Unit + 0x1438) = 0i64;
  *(Unit + 0x1448) = 0;
  v29 = off_4B678D0;
  *(Unit + 0x1458) = 0i64;
  *(Unit + 0x1468) = 0i64;
  *(Unit + 0x1470) = v29;
  *(Unit + 0x1478) = 0x7E81;
  *(Unit + 0x1480) = 0x461C4000BF800000i64;
  *(Unit + 0x1488) = a7 & 0x7FF;
  *(Unit + 0x1490) = Unit + 0x9D8;
  *(Unit + 0x1498) = v25;
  *(Unit + 0x14A0) = Unit + 0x1248;
  *(Unit + 0x14A8) = &off_44AB360;
  *(Unit + 0x14B0) = Unit;
  v30 = j__malloc_base(0x138ui64);
  if ( !v30 )
  {
    while ( off_4B678A0 && off_4B678A0(0x138i64) )
    {
      v31 = j__malloc_base(0x138ui64);
      if ( v31 )
      {
        v30 = v31;
        goto LABEL_25;
      }
    }
    *(&v65 + 4) = 0x138i64;
    goto LABEL_81;
  }
LABEL_25:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v30) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  *v30 = v25;
  *(v30 + 1) = 0i64;
  v30[3] = 0i64;
  v30[9] = v30 + 0xA;
  v30[6] = v30 + 0xA;
  v30[5] = v30 + 0xA;
  v30[7] = v30 + 0x1F;
  v30[0x23] = v30 + 0x24;
  v30[0x20] = v30 + 0x24;
  v30[0x1F] = v30 + 0x24;
  v30[0x21] = v30 + 0x26;
  *(v30 + 0x4C) = 0xFFFFFFFF;
  *(Unit + 0x14B8) = v30;
  *(Unit + 0x14C0) = 0;
  *(Unit + 0x14C4) = 0x3F800000i64;
  *(Unit + 0x14CC) = 0x3F800000;
  *(Unit + 0x14DC) = 0;
  *(Unit + 0x14D0) = 0i64;
  *(Unit + 0x14D8) = 0;
  *(Unit + 0x14E0) = 0xBF800000BF800000ui64;
  *(Unit + 0x14E8) = 0xBF800000;
  v32 = off_4B678C0;
  *(Unit + 0x14F0) = 0i64;
  *(Unit + 0x14F8) = v32;
  *(Unit + 0x1500) = 0i64;
  *(Unit + 0x1708) = 0i64;
  *(Unit + 0x1710) = v32;
  *(Unit + 0x1718) = 0i64;
  *(Unit + 0x1720) = _mm_load_si128(&xmmword_44AB130);
  *(Unit + 0x1730) = 0i64;
  *(Unit + 0x1740) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  v33 = Unit + 0x1730;
  v34 = *(Unit + 0x18);
  v35 = (v34 + 0x18);
  if ( !v34 )
    v35 = (Unit + 0x10);
  *v35 = v33;
  *(Unit + 0x18) = v33;
  *(Unit + 0x1748) = 0i64;
  *(Unit + 0x1730) = 0x1C;
  *(Unit + 0x1738) = "prepareRepairAssisteeTime";
  *(Unit + 0x1732) = 0x200000;
  *(Unit + 0x1740) = sub_158E050;
  *(Unit + 0x1750) = 0xBF800000;
  *(Unit + 0x1758) = 0i64;
  *(Unit + 0x1768) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
    goto LABEL_82;
  *(Unit + 0x1748) = Unit + 0x1758;
  *(Unit + 0x1758) = 0x23;
  *(Unit + 0x1760) = "prepareRepairAssistantTime";
  *(Unit + 0x175C) = 0x20;
  *(Unit + 0x1768) = sub_158E050;
  *(Unit + 0x1778) = 0xBF800000;
  *(Unit + 0x1780) = 0i64;
  *(Unit + 0x1770) = Unit + 0x1780;
  *(Unit + 0x1780) = 0x2F;
  *(Unit + 0x1788) = "prepareExtinguishAssistantTime";
  *(Unit + 0x1784) = 0x20;
  *(Unit + 0x1790) = sub_158E050;
  *(Unit + 0x17A0) = 0xBF800000;
  *(Unit + 0x17BC) = xmmword_44AB140;
  *(Unit + 0x17CC) = xmmword_44AB150;
  *(Unit + 0x17DC) = 0x3F800000;
  *(Unit + 0x17E0) = 0i64;
  *(Unit + 0x1798) = Unit + 0x17E0;
  *(Unit + 0x17E0) = 0x1D;
  *(Unit + 0x17E8) = "nextUseArtilleryTime";
  *(Unit + 0x17E4) = 0x20;
  *(Unit + 0x17F0) = sub_158E050;
  *(Unit + 0x1800) = 0;
  *(Unit + 0x1808) = 0;
  *(Unit + 0x1830) = 0i64;
  *(Unit + 0x1838) = 0;
  *(Unit + 0x183C) = 0;
  *(Unit + 0x180C) = 0i64;
  *(Unit + 0x1819) = 0i64;
  *(Unit + 0x1840) = 0i64;
  *(Unit + 0x1850) = 0;
  *(Unit + 0x1858) = 0i64;
  *(Unit + 0x1868) = 0i64;
  *(Unit + 0x1878) = 0i64;
  *(Unit + 0x1888) = 0i64;
  *(Unit + 0x1898) = 0i64;
  *(Unit + 0x17F8) = Unit + 0x1898;
  *(Unit + 0x1898) = 0x25;
  *(Unit + 0x18A0) = "prepareRepairCooldownsTime";
  *(Unit + 0x189C) = 0x20;
  *(Unit + 0x18A8) = sub_158E050;
  *(Unit + 0x18B8) = 0xBF800000;
  *(Unit + 0x18C0) = 0i64;
  *(Unit + 0x18D0) = v32;
  *(Unit + 0x18D8) = 0i64;
  *(Unit + 0x18E8) = v32;
  *(Unit + 0x18F0) = 0i64;
  *(Unit + 0x18F8) = 1;
  *(Unit + 0x1900) = 0i64;
  *(Unit + 0x18B0) = Unit + 0x1900;
  *(Unit + 0x18) = Unit + 0x1900;
  *(Unit + 0x1918) = 0i64;
  *(Unit + 0x1900) = 0x1E;
  *(Unit + 0x1908) = "killer";
  *(Unit + 0x1902) = 0x5800020;
  *(Unit + 0x1910) = sub_34A170;
  *(Unit + 0x1920) = 0xA;
  *(Unit + 0x1928) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x19C0) = 0i64;
  *(Unit + 0x1924) = 0xFFFFFFFF;
  *(Unit + 0x193C) = 0xFFFFFFFF;
  *(Unit + 0x1938) = 0;
  *(Unit + 0x1940) = 0i64;
  *(Unit + 0x1950) = 0x10;
  *(Unit + 0x195C) = 0;
  *(Unit + 0x1954) = 0i64;
  *(Unit + 0x1980) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x197C) = 0xFFFF;
  *(Unit + 0x1988) = 0;
  *(Unit + 0x199C) = 0xFFFF;
  *(Unit + 0x1964) = v11;
  *(Unit + 0x19A4) = 0xFFFFFFFF;
  *(Unit + 0x19A0) = 0;
  *(Unit + 0x198C) = 0i64;
  *(Unit + 0x1974) = 0x7FFFFFFFFFFFFFFFi64;
  *(Unit + 0x1960) = 0;
  *(Unit + 0x19AC) = 0;
  *(Unit + 0x19A8) = 0;
  *(Unit + 0x19B0) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x19BC) = 0;
  *(Unit + 0x19B8) = 0xFFFFFFFF;
  *(Unit + 0x19E0) = 0i64;
  *(Unit + 0x19D0) = 0i64;
  if ( *(Unit + 0x20) != 0x54454E44 )
  {
LABEL_82:
    *(&v65 + 4) = Unit;
    Src = 5;
    LOBYTE(a3) = 1;
    log_err(
      "../../prog/gameLibs/publicInclude\\daNet/reflection.h",
      0x13F,
      a3,
      "Reflection: invalid object 0x%p",
      &Src,
      1);
  }
  *(Unit + 0x1918) = Unit + 0x19D0;
  *(Unit + 0x19D0) = 0x22;
  *(Unit + 0x19D8) = "isNeedRepairHelp";
  *(Unit + 0x19D4) = 8;
  *(Unit + 0x19E0) = sub_36E440;
  *(Unit + 0x19F0) = 0;
  *(Unit + 0x19F8) = 0;
  *(Unit + 0x1A00) = 0i64;
  *(Unit + 0x19E8) = Unit + 0x1A00;
  *(Unit + 0x1A00) = 0x30;
  *(Unit + 0x1A08) = "isNeedExtinguishHelp";
  *(Unit + 0x1A04) = 8;
  *(Unit + 0x1A10) = sub_36E440;
  *(Unit + 0x1A20) = 0;
  *(Unit + 0x1A28) = 0;
  *(Unit + 0x1A30) = 0i64;
  *(Unit + 0x1A18) = Unit + 0x1A30;
  *(Unit + 0x1A30) = 0x26;
  *(Unit + 0x1A38) = "repairCooldowns";
  *(Unit + 0x1A34) = 8;
  *(Unit + 0x1A40) = sub_36E440;
  *(Unit + 0x1A50) = 0;
  *(Unit + 0x1A58) = 0;
  *(Unit + 0x1A5C) = 0;
  *(Unit + 0x1A60) = 0x3F800000;
  v36 = off_4B678C0;
  *(Unit + 0x1A68) = 0i64;
  *(Unit + 0x1A70) = v36;
  *(Unit + 0x1A78) = 0i64;
  *(Unit + 0x1A80) = 0x3F800000;
  *(Unit + 0x1A88) = 0i64;
  *(Unit + 0x1A48) = Unit + 0x1A88;
  *(Unit + 0x1A88) = 0x20;
  *(Unit + 0x1A90) = "maskingFactor";
  *(Unit + 0x1A8C) = 0x20;
  *(Unit + 0x1A98) = sub_158E050;
  *(Unit + 0x1AA8) = 0x3F800000;
  *(Unit + 0x1AB0) = 0;
  *(Unit + 0x1AB4) = 0;
  *(Unit + 0x1AB8) = 0xFFFF;
  *(Unit + 0x1ACC) = 0;
  *(Unit + 0x1ABC) = 0i64;
  *(Unit + 0x1AC2) = 0i64;
  *(Unit + 0x1AD0) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x1AE0) = 0;
  *(Unit + 0x1AE8) = 0i64;
  *(Unit + 0x1AF0) = v36;
  *(Unit + 0x1AF8) = 0i64;
  *(Unit + 0x1B08) = 0i64;
  *(Unit + 0x1AA0) = Unit + 0x1B08;
  *(Unit + 0x1B08) = 0x33;
  *(Unit + 0x1B10) = "timeToNextSmokeScreen";
  *(Unit + 0x1B0C) = 0x20;
  *(Unit + 0x1B18) = sub_158E050;
  *(Unit + 0x1B28) = 0;
  *(Unit + 0x1B30) = 0i64;
  *(Unit + 0x1B20) = Unit + 0x1B30;
  *(Unit + 0x1B30) = 0x34;
  *(Unit + 0x1B38) = "smokeScreenCount";
  *(Unit + 0x1B34) = 8;
  *(Unit + 0x1B40) = sub_36E2B0;
  *(Unit + 0x1B50) = 0;
  *(Unit + 0x1B58) = 0i64;
  *(Unit + 0x1B48) = Unit + 0x1B58;
  *(Unit + 0x18) = Unit + 0x1B58;
  *(Unit + 0x1B70) = 0i64;
  *(Unit + 0x1B58) = 0x35;
  *(Unit + 0x1B60) = "smokeScreenActived";
  *(Unit + 0x1B5C) = 8;
  *(Unit + 0x1B68) = sub_36E440;
  *(Unit + 0x1B78) = 0;
  *(Unit + 0x1BBC) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x1B90) = 0i64;
  *(Unit + 0x1B80) = 0i64;
  *(Unit + 0x1BA0) = 0;
  *(Unit + 0x1BC8) = 0i64;
  *(Unit + 0x1BD0) = 0x1000100;
  *(Unit + 0x1BEC) = 0;
  *(Unit + 0x1BF0) = 0i64;
  *(Unit + 0x1BF8) = 0xA;
  *(Unit + 0x1C00) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x1C98) = 0i64;
  *(Unit + 0x1BFC) = 0xFFFFFFFF;
  *(Unit + 0x1C10) = 0xFFFFFFFF00000000ui64;
  *(Unit + 0x1C18) = 0i64;
  *(Unit + 0x1C28) = 0x10;
  *(Unit + 0x1C34) = 0;
  *(Unit + 0x1C2C) = 0i64;
  *(Unit + 0x1C58) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x1C54) = 0xFFFF;
  *(Unit + 0x1C60) = 0;
  *(Unit + 0x1C74) = 0xFFFF;
  *(Unit + 0x1C3C) = v11;
  *(Unit + 0x1C7C) = 0xFFFFFFFF;
  *(Unit + 0x1C78) = 0;
  *(Unit + 0x1C64) = 0i64;
  *(Unit + 0x1C4C) = 0x7FFFFFFFFFFFFFFFi64;
  *(Unit + 0x1C38) = 0;
  *(Unit + 0x1C84) = 0;
  *(Unit + 0x1C80) = 0;
  *(Unit + 0x1C88) = 0xFFFFFFFFFFFFFFFFui64;
  *(Unit + 0x1C94) = 0;
  *(Unit + 0x1C90) = 0xFFFFFFFF;
  *(Unit + 0x1CA8) = 0x7000000;
  *(Unit + 0x1CB0) = 0;
  *(Unit + 0x1CB1) = a8;
  *(Unit + 0x1CB8) = 0i64;
  *(Unit + 0x1CC0) = 0xFFFFFFFF;
  *(Unit + 0x1A58) = 0;
  if ( qword_4B50090 > a6 )
  {
    v37 = *(qword_4B50080 + a6);
    if ( v37 )
    {
      if ( qword_4B507E8 )
      {
        v38 = *(v37 + 0x208);
        v39 = *(Unit + 0x1110);
        if ( v39 != v38 )
        {
          if ( !*(Unit + 0x10B0) )
          {
            v40 = *(Unit + 8) & 0x7FF;
            *(&v65 + 4) = "setArmy";
            Src = 1;
            v67 = v40;
            HIDWORD(v65) = 2;
            *(&v68 + 1) = v39;
            LODWORD(v68) = 2;
            *&v70[4] = v38;
            v69 = 2;
            dg_debug(3u, "%s fm %d army %d -> %d", &Src, 4);
            v39 = *(Unit + 0x1110);
          }
          LOBYTE(Src) = v38;
          if ( v39 != v38 )
          {
            sub_158CE00(v84, Unit, &Src);
            *(Unit + 0x1110) = Src;
          }
        }
      }
      else
      {
        unknown_setarmy(*(qword_4B50080 + a6), a5, "Unit");
      }
      (*(*Unit + 0x190i64))(Unit, v37);
    }
  }
  v41 = j__malloc_base(0xD8ui64);
  if ( !v41 )
  {
    while ( off_4B678A0 && off_4B678A0(0xD8i64) )
    {
      v42 = j__malloc_base(0xD8ui64);
      if ( v42 )
      {
        v41 = v42;
        goto LABEL_45;
      }
    }
    *(&v65 + 4) = 0xD8i64;
    goto LABEL_81;
  }
LABEL_45:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v41) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  *v41 = 0;
  *(v41 + 1) = 0i64;
  v43 = off_4B678C0;
  *(v41 + 2) = off_4B678C0;
  *(v41 + 6) = 0i64;
  *(v41 + 5) = v43;
  *(v41 + 3) = 0i64;
  *(v41 + 4) = 0i64;
  *(v41 + 0xA) = 0i64;
  *(v41 + 0xB) = 0xBF800000i64;
  *(v41 + 0xC) = 0x3F800000i64;
  v41[0x1A] = 0;
  *(v41 + 0x1E) = xmmword_44AB160;
  *(v41 + 0x22) = xmmword_44AB170;
  *(v41 + 0x26) = v28;
  *(v41 + 0x2A) = xmmword_44A9010;
  *(v41 + 0x17) = 0i64;
  *(v41 + 0x18) = Unit;
  *(v41 + 0xC8) = 0;
  *(v41 + 0x33) = 0i64;
  *(v41 + 0x1B) = 0i64;
  v41[0x1D] = 0;
  *(Unit + 0x11C8) = v41;
  v44 = j__malloc_base(0x48ui64);
  if ( !v44 )
  {
    while ( off_4B678A0 && off_4B678A0(0x48i64) )
    {
      v45 = j__malloc_base(0x48ui64);
      if ( v45 )
      {
        v44 = v45;
        goto LABEL_50;
      }
    }
    *(&v65 + 4) = 0x48i64;
    goto LABEL_81;
  }
LABEL_50:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v44) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  *v44 = 0i64;
  *(v44 + 2) = &unk_44AACA0;
  *(v44 + 6) = 0;
  *(v44 + 0x1D) = 3;
  *(v44 + 8) = 0x3F000000;
  *(v44 + 0x24) = 0i64;
  *(v44 + 0x34) = 0i64;
  *(v44 + 0x11) = 0;
  *(Unit + 0x9E0) = v44;
  v46 = *(Unit + 0x1058);
  v47 = v46 | 0x40000;
  if ( v46 != (v46 | 0x40000) )
  {
    *(Unit + 0x1058) = v47;
    if ( ((v47 ^ v46) & 0x38C5C2CE) != 0 )
      sub_158CE00(v86, Unit, Unit + 0x1050);
  }
  *(Unit + 0x160) = 0i64;
  *(Unit + 0x1140) = 0;
  v48 = *(Unit + 0x4C8);
  if ( v48 != &szFile )
  {
    if ( v48 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    *(Unit + 0x4C8) = 0i64;
  }
  v49 = *(Unit + 0x4C0);
  if ( v49 != &szFile )
  {
    if ( v49 )
      (*(*off_4B678C8 + 0x40i64))(off_4B678C8);
    *(Unit + 0x4C0) = 0i64;
  }
  v50 = *(Unit + 0x10B0);
  *(Unit + 0x129C) = v50 == 7 || v50 == 4;
  v51 = (qword_4AD09E8 + 0xD0);
  v52 = "expForHitTimeout";
  if ( v50 == 5 )
    v52 = "expForShipHitTimeout";
  Src = 0;
  v53 = data::set_real(qword_4AD09E8 + 0xD0, v52, &Src);
  *(Unit + 0x17A8) = LODWORD(v53);
  Src = 0;
  v54 = data::set_real(v51, "expForIneffectiveTankHitTimeout", &Src);
  *(Unit + 0x17AC) = LODWORD(v54);
  Src = 0xA;
  *(Unit + 0x17B0) = data::set_int(v51, "ineffectiveHitMinCount", &Src);
  Src = 0x3A83126F;
  v55 = data::set_real(v51, "ineffectiveHitMinPart", &Src);
  *(Unit + 0x17B4) = LODWORD(v55);
  LOBYTE(Src) = 0;
  *(Unit + 0x17B8) = data::get_bool(v51, "effectiveHitEvenWithoutDamagingTank", &Src);
  v56 = game;
  *(Unit + 0x288) = *(*(game + 0x498) + 0x1F18i64);
  v57 = *(Unit + 0x10B0);
  if ( v57 > 0xF )
  {
LABEL_76:
    v60 = 0i64;
    goto LABEL_65;
  }
  v58 = 0x895E;
  v59 = _bittest(&v58, v57);
  v60 = Unit;
  if ( !v59 )
  {
    v61 = 1;
    if ( v57 == 5 )
      goto LABEL_66;
    goto LABEL_76;
  }
LABEL_65:
  v61 = 2 - (v60 == 0);
LABEL_66:
  *(Unit + 0xFF0) = v61;
  *&v87[3] = 0i64;
  LOBYTE(Src) = 0xA;
  v65 = 0xFFFFFFFFFFFFFFFFui64;
  v66 = 0xFFFFFFFF;
  v67 = 0xFFFFFFFF00000000ui64;
  v68 = 0i64;
  v69 = 0x10;
  *v70 = 0i64;
  v70[8] = 0;
  v71 = xmmword_44A9000;
  v72 = 0xFFFFFFFF7FFFFFFFui64;
  v73 = 0x7FFFFFFF;
  v74 = 0xFFFF;
  v75 = 0xFFFFFFFFFFFFFFFFui64;
  v76 = 0i64;
  v77 = 0;
  v78 = 0xFFFF;
  v79 = xmmword_44AB180;
  v80 = 0xFFFFFFFFFFFFFFFFui64;
  v81 = 0xFFFFFFFF;
  v82 = 0;
  *&v83[0xF] = 0;
  *v83 = *v87;
  if ( *(Unit + 0x1980) != 0xFFFFFFFFFFFFFFFFui64 || *(Unit + 0x199C) != 0xFFFF || *(Unit + 0x197C) != 0xFFFF )
  {
    sub_158CE00(Unit + 0x1900, Unit, &Src);
    memmove((Unit + 0x1920), &Src, 0xB0ui64);
    v56 = game;
  }
  memset((Unit + 0x1508), 0, 0x200ui64);
  *(Unit + 0x68C) = 0i64;
  *(Unit + 0x69C) = 0i64;
  *(Unit + 0x6AC) = 0i64;
  *(Unit + 0x6BC) = 0i64;
  *(Unit + 0x6CC) = 0i64;
  *(Unit + 0x6DC) = 0i64;
  if ( *(v56 + 0x554) == a6 )
  {
    v62 = *(Unit + 0x1058) | 0x100;
    if ( *(Unit + 0x1058) != v62 )
      *(Unit + 0x1058) = v62;
  }
  sub_31A650(Unit);
  *(Unit + 0x1378) = 0;
  *(Unit + 0x1360) = 0;
  return Unit;
}
