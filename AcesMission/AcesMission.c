__int64 __fastcall AcesMission(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64, __int64, _DWORD *); // r8
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdx
  _DWORD *v12; // rbx
  _DWORD *v13; // rax
  void *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rbp
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  int v25; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 *v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]

  *(a1 + 8) = 0x5804;
  *(a1 + 0x20) = 0x54454E44;
  *(a1 + 0x28) = 0i64;
  *(a1 + 0x30) = 0i64;
  *(a1 + 0x38) = 0i64;
  *(a1 + 0x40) = 0i64;
  *(a1 + 0x48) = 2;
  *a1 = &off_44CEB80;
  *(a1 + 0x50) = off_44CEBC0;
  *(a1 + 0x58) = 0;
  *(a1 + 0x80) = 0i64;
  *(a1 + 0x60) = 0i64;
  *(a1 + 0x6C) = 0i64;
  *(a1 + 0x10) = a1 + 0x80;
  *(a1 + 0x18) = a1 + 0x80;
  *(a1 + 0x98) = 0i64;
  *(a1 + 0x80) = 2;
  *(a1 + 0x88) = "lastSuperArtilleryTime";
  *(a1 + 0x84) = 0x20;
  *(a1 + 0x90) = sub_158E050;
  *(a1 + 0xA0) = 0xBF800000;
  *(a1 + 0xA8) = 0i64;
  *(a1 + 0xB8) = xmmword_44CEB70;
  *(a1 + 0xC8) = 0;
  v4 = j__malloc_base(0x28ui64);
  if ( v4 )
    goto LABEL_6;
  do
  {
    if ( !off_4B678A0 || !off_4B678A0(0x28i64) )
    {
      v26 = 0x28i64;
      goto LABEL_31;
    }
    v6 = j__malloc_base(0x28ui64);
  }
  while ( !v6 );
  v4 = v6;
LABEL_6:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v4) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  v8 = off_4B678C0;
  v4[3] = off_4B678C0;
  *v4 = 0i64;
  *(v4 + 2) = 0;
  v4[2] = 0i64;
  v4[4] = 0i64;
  *(a1 + 0xD0) = v4;
  *(a1 + 0xD8) = 0;
  *(a1 + 0xE0) = 0i64;
  *(a1 + 0xE8) = v8;
  *(a1 + 0xF0) = 0i64;
  *(a1 + 0x100) = v8;
  *(a1 + 0x108) = 0i64;
  *(a1 + 0x118) = v8;
  *(a1 + 0x120) = 0i64;
  *(a1 + 0x130) = v8;
  *(a1 + 0x138) = 0i64;
  *(a1 + 0x148) = v8;
  *(a1 + 0x150) = 0i64;
  *(a1 + 0x160) = v8;
  *(a1 + 0x168) = 0i64;
  *(a1 + 0x178) = v8;
  *(a1 + 0x180) = 0i64;
  *(a1 + 0x190) = v8;
  *(a1 + 0x198) = 0i64;
  *(a1 + 0x1A8) = v8;
  *(a1 + 0x1B0) = 0i64;
  *(a1 + 0x1C0) = v8;
  *(a1 + 0x1C8) = 0i64;
  *(a1 + 0x1D8) = v8;
  *(a1 + 0x1E0) = 0i64;
  *(a1 + 0x208) = 0x400000003F800000i64;
  *(a1 + 0x1F8) = 1i64;
  *(a1 + 0x200) = 0i64;
  *(a1 + 0x210) = 0;
  *(a1 + 0x1F0) = &qword_4A791E0;
  *(a1 + 0x218) = 0i64;
  *(a1 + 0x228) = v8;
  *(a1 + 0x230) = 0i64;
  *(a1 + 0x240) = v8;
  *(a1 + 0x260) = 0i64;
  *(a1 + 0x248) = 0i64;
  *(a1 + 0x258) = 0;
  *(a1 + 0x268) = a1 + 0x260;
  *(a1 + 0x270) = 0i64;
  *(a1 + 0x280) = 0i64;
  *(a1 + 0x290) = 0i64;
  *(a1 + 0x2A0) = 0i64;
  *(a1 + 0x2A8) = 0xD0808;
  *(a1 + 0x2B0) = 0i64;
  *(a1 + 0x2B8) = v8;
  *(a1 + 0x2C0) = 0i64;
  *(a1 + 0x2D0) = v8;
  *(a1 + 0x2F8) = 0i64;
  *(a1 + 0x2E8) = 0i64;
  *(a1 + 0x2D8) = 0i64;
  if ( *(a1 + 0x20) != 0x54454E44 )
    goto LABEL_32;
  v9 = a1 + 0x2E8;
  v10 = *(a1 + 0x18);
  v11 = (v10 + 0x18);
  if ( !v10 )
    v11 = (a1 + 0x10);
  *v11 = v9;
  *(a1 + 0x18) = v9;
  *(a1 + 0x300) = 0i64;
  *(a1 + 0x2E8) = 3;
  *(a1 + 0x2F0) = "battleAreaChangeTime";
  *(a1 + 0x2EA) = 0x200000;
  *(a1 + 0x2F8) = sub_158E050;
  *(a1 + 0x308) = 0xBF800000;
  *(a1 + 0x310) = 0i64;
  *(a1 + 0x320) = 0i64;
  if ( *(a1 + 0x20) != 0x54454E44 )
    goto LABEL_32;
  *(a1 + 0x300) = a1 + 0x310;
  *(a1 + 0x310) = 4;
  *(a1 + 0x318) = "battleAreaChangeToId";
  *(a1 + 0x314) = 0x20;
  *(a1 + 0x320) = sub_158DEB0;
  *(a1 + 0x330) = 0xFFFFFFFF;
  *(a1 + 0x338) = 0xFFFFFFFF;
  *(a1 + 0x340) = 0i64;
  *(a1 + 0x328) = a1 + 0x340;
  *(a1 + 0x340) = 9;
  *(a1 + 0x348) = "forcedMapCellsAir";
  *(a1 + 0x344) = 8;
  *(a1 + 0x350) = sub_36E2B0;
  *(a1 + 0x360) = 0;
  *(a1 + 0x368) = 0i64;
  *(a1 + 0x358) = a1 + 0x368;
  *(a1 + 0x368) = 0xA;
  *(a1 + 0x370) = "forcedMapCellsGround";
  *(a1 + 0x36C) = 8;
  *(a1 + 0x378) = sub_36E2B0;
  *(a1 + 0x388) = 0;
  *(a1 + 0x390) = 0i64;
  *(a1 + 0x380) = a1 + 0x390;
  *(a1 + 0x390) = 5;
  *(a1 + 0x398) = "useCustomSuperArtillery";
  *(a1 + 0x394) = 8;
  *(a1 + 0x3A0) = sub_36E440;
  *(a1 + 0x3B0) = 0;
  *(a1 + 0x3B8) = 0i64;
  *(a1 + 0x3A8) = a1 + 0x3B8;
  *(a1 + 0x18) = a1 + 0x3B8;
  *(a1 + 0x3D0) = 0i64;
  *(a1 + 0x3B8) = 0xC;
  *(a1 + 0x3C0) = "waterWindStrengthClamp";
  *(a1 + 0x3BA) = 0x400020;
  *(a1 + 0x3C8) = sub_158DAC0;
  v12 = j__malloc_base(0x40ui64);
  if ( !v12 )
  {
    while ( off_4B678A0 && off_4B678A0(0x40i64) )
    {
      v13 = j__malloc_base(0x40ui64);
      if ( v13 )
      {
        v12 = v13;
        goto LABEL_15;
      }
    }
    v26 = 0x40i64;
LABEL_31:
    v25 = 2;
    LOBYTE(v5) = 1;
    log_err("..\\..\\prog\\engine2\\memory\\dagmem.cpp", 0x345, v5, "Not enough memory to alloc %llu bytes", &v25, 1);
  }
LABEL_15:
  v28 = a2;
  _InterlockedAdd(&dword_4B6788C, (j__msize(v12) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  *v12 = 0;
  v12[2] = 0;
  *(v12 + 2) = 0i64;
  v14 = off_4B678C0;
  *(v12 + 3) = off_4B678C0;
  *(v12 + 2) = 0i64;
  *(v12 + 6) = v14;
  *(v12 + 7) = 0i64;
  *(a1 + 0x3F0) = v12;
  *(a1 + 0x3F8) = 0xFFFFFFFF;
  *(a1 + 0x400) = 0i64;
  *(a1 + 0x410) = 0i64;
  *(a1 + 0x420) = 0i64;
  *(a1 + 0x430) = 0i64;
  if ( *(a1 + 0x20) != 0x54454E44 )
    goto LABEL_32;
  v15 = *(a1 + 0x18);
  v16 = (v15 + 0x18);
  if ( !v15 )
    v16 = (a1 + 0x10);
  *v16 = a1 + 0x418;
  *(a1 + 0x18) = a1 + 0x418;
  *(a1 + 0x430) = 0i64;
  *(a1 + 0x418) = 6;
  *(a1 + 0x420) = "timeLeft";
  *(a1 + 0x41A) = 0x100000;
  *(a1 + 0x428) = sub_36E370;
  *(a1 + 0x438) = 0;
  *(a1 + 0x448) = 0xFFFF;
  *(a1 + 0x460) = 0x54454E44;
  *(a1 + 0x468) = 0i64;
  *(a1 + 0x470) = 0i64;
  *(a1 + 0x478) = 0i64;
  *(a1 + 0x480) = 0i64;
  *(a1 + 0x488) = 2;
  *(a1 + 0x440) = &off_44AAEB0;
  *(a1 + 0x490) = 0x1000000002i64;
  *(a1 + 0x450) = a1 + 0x490;
  *(a1 + 0x498) = "score";
  *(a1 + 0x4A0) = sub_36E370;
  *(a1 + 0x4B0) = 0;
  *(a1 + 0x4B8) = 0x1000000003i64;
  *(a1 + 0x4A8) = a1 + 0x4B8;
  *(a1 + 0x4C0) = "tickets";
  *(a1 + 0x4C8) = sub_36E370;
  *(a1 + 0x4D8) = 0;
  *(a1 + 0x4E0) = 0x2000000004i64;
  *(a1 + 0x4D0) = a1 + 0x4E0;
  *(a1 + 0x4E8) = &unk_4913EA8;
  *(a1 + 0x4F0) = sub_158DEB0;
  *(a1 + 0x500) = 0;
  *(a1 + 0x508) = 0x2000000005i64;
  *(a1 + 0x4F8) = a1 + 0x508;
  v27 = (a1 + 0x10);
  *(a1 + 0x510) = "orderCooldownLeft";
  *(a1 + 0x518) = sub_158DEB0;
  *(a1 + 0x528) = 0;
  *(a1 + 0x530) = 0x2000000006i64;
  *(a1 + 0x520) = a1 + 0x530;
  *(a1 + 0x538) = "spawnScore";
  v7 = sub_158E050;
  *(a1 + 0x540) = sub_158E050;
  *(a1 + 0x550) = 0;
  *(a1 + 0x558) = 0x2000000007i64;
  *(a1 + 0x548) = a1 + 0x558;
  *(a1 + 0x458) = a1 + 0x558;
  *(a1 + 0x570) = 0i64;
  *(a1 + 0x560) = "roundScore";
  *(a1 + 0x568) = sub_158E050;
  *(a1 + 0x578) = 0;
  *(a1 + 0x588) = 0xFFFF;
  *(a1 + 0x5A0) = 0x54454E44;
  *(a1 + 0x5A8) = 0i64;
  *(a1 + 0x5B0) = 0i64;
  *(a1 + 0x5B8) = 0i64;
  *(a1 + 0x5C0) = 0i64;
  *(a1 + 0x5C8) = 2;
  *(a1 + 0x580) = &off_44AAEB0;
  *(a1 + 0x5D0) = 0x1000000002i64;
  *(a1 + 0x590) = a1 + 0x5D0;
  *(a1 + 0x5D8) = "score";
  *(a1 + 0x5E0) = sub_36E370;
  *(a1 + 0x5F0) = 0;
  *(a1 + 0x5F8) = 0x1000000003i64;
  *(a1 + 0x5E8) = a1 + 0x5F8;
  *(a1 + 0x600) = "tickets";
  *(a1 + 0x608) = sub_36E370;
  *(a1 + 0x618) = 0;
  *(a1 + 0x620) = 0x2000000004i64;
  *(a1 + 0x610) = a1 + 0x620;
  *(a1 + 0x628) = &unk_4913EA8;
  *(a1 + 0x630) = sub_158DEB0;
  *(a1 + 0x640) = 0;
  *(a1 + 0x648) = 0x2000000005i64;
  *(a1 + 0x638) = a1 + 0x648;
  *(a1 + 0x650) = "orderCooldownLeft";
  *(a1 + 0x658) = sub_158DEB0;
  *(a1 + 0x668) = 0;
  *(a1 + 0x670) = 0x2000000006i64;
  *(a1 + 0x660) = a1 + 0x670;
  *(a1 + 0x678) = "spawnScore";
  *(a1 + 0x680) = sub_158E050;
  *(a1 + 0x690) = 0;
  *(a1 + 0x698) = 0x2000000007i64;
  *(a1 + 0x688) = a1 + 0x698;
  *(a1 + 0x598) = a1 + 0x698;
  *(a1 + 0x6B0) = 0i64;
  *(a1 + 0x6A0) = "roundScore";
  *(a1 + 0x6A8) = sub_158E050;
  *(a1 + 0x6B8) = 0;
  *(a1 + 0x6C8) = 0xFFFF;
  *(a1 + 0x6E0) = 0x54454E44;
  *(a1 + 0x6E8) = 0i64;
  *(a1 + 0x6F0) = 0i64;
  *(a1 + 0x6F8) = 0i64;
  *(a1 + 0x700) = 0i64;
  *(a1 + 0x708) = 2;
  *(a1 + 0x6C0) = &off_44AAEB0;
  *(a1 + 0x710) = 0x1000000002i64;
  *(a1 + 0x6D0) = a1 + 0x710;
  *(a1 + 0x718) = "score";
  *(a1 + 0x720) = sub_36E370;
  *(a1 + 0x730) = 0;
  *(a1 + 0x738) = 0x1000000003i64;
  *(a1 + 0x728) = a1 + 0x738;
  *(a1 + 0x740) = "tickets";
  *(a1 + 0x748) = sub_36E370;
  *(a1 + 0x758) = 0;
  *(a1 + 0x760) = 0x2000000004i64;
  *(a1 + 0x750) = a1 + 0x760;
  *(a1 + 0x768) = &unk_4913EA8;
  *(a1 + 0x770) = sub_158DEB0;
  *(a1 + 0x780) = 0;
  *(a1 + 0x788) = 0x2000000005i64;
  *(a1 + 0x778) = a1 + 0x788;
  *(a1 + 0x790) = "orderCooldownLeft";
  *(a1 + 0x798) = sub_158DEB0;
  *(a1 + 0x7A8) = 0;
  *(a1 + 0x7B0) = 0x2000000006i64;
  *(a1 + 0x7A0) = a1 + 0x7B0;
  *(a1 + 0x7B8) = "spawnScore";
  *(a1 + 0x7C0) = sub_158E050;
  *(a1 + 0x7D0) = 0;
  *(a1 + 0x7D8) = 0x2000000007i64;
  *(a1 + 0x7C8) = a1 + 0x7D8;
  *(a1 + 0x6D8) = a1 + 0x7D8;
  *(a1 + 0x7F0) = 0i64;
  *(a1 + 0x7E0) = "roundScore";
  *(a1 + 0x7E8) = sub_158E050;
  *(a1 + 0x7F8) = 0;
  *(a1 + 0x800) = 0;
  *(a1 + 0x804) = 0xFFFFFFFFi64;
  *(a1 + 0x810) = 0i64;
  v17 = off_4B678C0;
  *(a1 + 0x818) = off_4B678C0;
  *(a1 + 0x820) = 0i64;
  *(a1 + 0x830) = v17;
  *(a1 + 0x838) = 0i64;
  *(a1 + 0x848) = 0i64;
  *(a1 + 0x858) = 0i64;
  if ( *(a1 + 0x20) != 0x54454E44 )
    goto LABEL_32;
  v18 = a1 + 0x840;
  v19 = *(a1 + 0x18);
  v20 = (v19 + 0x18);
  if ( !v19 )
    v20 = v27;
  *v20 = v18;
  *(a1 + 0x18) = v18;
  *(a1 + 0x858) = 0i64;
  *(a1 + 0x840) = 7;
  *(a1 + 0x848) = "dummyForBombingEvent";
  *(a1 + 0x842) = 0x200000;
  *(a1 + 0x850) = sub_C7F2D0;
  *(a1 + 0x868) = 0i64;
  *(a1 + 0x878) = 0i64;
  *(a1 + 0x888) = 0i64;
  *(a1 + 0x898) = 0i64;
  if ( *(a1 + 0x20) != 0x54454E44 )
  {
LABEL_32:
    v26 = a1;
    v25 = 5;
    LOBYTE(v7) = 1;
    log_err(
      "../../prog/gameLibs/publicInclude\\daNet/reflection.h",
      0x13F,
      v7,
      "Reflection: invalid object 0x%p",
      &v25,
      1);
  }
  *(a1 + 0x858) = a1 + 0x880;
  *(a1 + 0x880) = 0xB;
  *(a1 + 0x888) = "dummyForUnlimitedControlEvent";
  *(a1 + 0x884) = 0x20;
  *(a1 + 0x890) = sub_C7F310;
  *(a1 + 0x8A8) = 0i64;
  *(a1 + 0x898) = a1 + 0x8A8;
  *(a1 + 0x18) = a1 + 0x8A8;
  *(a1 + 0x8C0) = 0i64;
  *(a1 + 0x8A8) = 8;
  *(a1 + 0x8B0) = "customState";
  *(a1 + 0x8AC) = 0x40;
  *(a1 + 0x8B8) = sub_C7FE10;
  *(a1 + 0x8D4) = 0;
  *(a1 + 0x8D8) = 0i64;
  *(a1 + 0x8E8) = 0i64;
  *(a1 + 0x8F4) = 0i64;
  *(a1 + 0x908) = v28;
  *(a1 + 0x944) = 0xBF800000FFFFFFFFui64;
  *(a1 + 0x950) = 0i64;
  *(a1 + 0x95C) = 0;
  *(a1 + 0x960) = 0i64;
  *(a1 + 0x968) = v17;
  *(a1 + 0x970) = 0i64;
  *(a1 + 0x448) = 0x7800;
  *(a1 + 0x588) = 0x7801;
  *(a1 + 0x6C8) = 0x7802;
  v21 = j__malloc_base(0x460ui64);
  if ( !v21 )
  {
    while ( off_4B678A0 && off_4B678A0(0x460i64) )
    {
      v22 = j__malloc_base(0x460ui64);
      if ( v22 )
      {
        v21 = v22;
        goto LABEL_27;
      }
    }
    v26 = 0x460i64;
    goto LABEL_31;
  }
LABEL_27:
  _InterlockedAdd(&dword_4B6788C, (j__msize(v21) + 0xF) >> 4);
  _InterlockedIncrement(&dword_4B67890);
  sub_DF39D0(v21);
  *v21 = off_44D0650;
  *(v21 + 0x40) = 0i64;
  v21[0x82] = v21 + 0x81;
  *(v21 + 0x83) = 0i64;
  *(v21 + 0x85) = 0i64;
  *(v21 + 0x87) = 0i64;
  v21[0x89] = 0i64;
  *(v21 + 0x114) = 0xD0808;
  *(v21 + 0x116) = 0;
  *(a1 + 0x408) = v21;
  LOBYTE(v23) = 1;
  sub_C72FB0(a1, v23);
  return a1;
}