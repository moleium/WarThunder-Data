void __fastcall player_info_builder(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // esi
  __int64 PlayerInfo; // rsi
  _DWORD *v19; // rax
  int v20; // ecx
  void *v21; // rax
  __int64 (__fastcall *v22)(); // r8
  _WORD *v23; // rdi
  __int64 i; // rcx
  _WORD *v25; // rdi
  __int64 j; // rcx
  _WORD *v27; // rdi
  __int64 k; // rcx
  _WORD *v29; // rdi
  __int64 m; // rcx
  _WORD *v31; // rdi
  __int64 n; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdi
  _QWORD *v35; // rbp
  void *v36; // rdi
  void *v37; // rcx
  void *v38; // rax
  void *v39; // rdi
  __int64 v40; // rax
  __int128 *v41; // rax
  __int128 *v42; // rdx
  __int128 v43; // [rsp+40h] [rbp-58h] BYREF
  char v44[2]; // [rsp+5Ah] [rbp-3Eh] BYREF
  char v45[60]; // [rsp+5Ch] [rbp-3Ch] BYREF

  v8 = *(a1 + 8);
  if ( v8 )
  {
    if ( *(v8 + 0xA) > *(v8 + 8) )
      goto LABEL_19;
    v9 = *(a1 + 0x14);
    if ( !*(a1 + 0x14) )
      goto LABEL_17;
    v10 = 0i64;
    while ( *(v8 + v10) )
    {
      if ( *(v8 + v10 + 0xA) > *(v8 + v10 + 8) )
      {
        if ( v10 )
        {
          v42 = (v8 + v10);
          v43 = *v42;
          *v42 = *v8;
          *v8 = v43;
        }
        goto LABEL_19;
      }
      v10 += 0x10i64;
      if ( 0x10 * v9 == v10 )
        break;
    }
  }
  else
  {
    v9 = *(a1 + 0x14);
    if ( !*(a1 + 0x14) )
    {
LABEL_17:
      v13 = *(a1 + 0x16);
      goto LABEL_18;
    }
  }
  v11 = v8 + 0x10 * v9;
  v12 = 0;
  do
  {
    if ( !*v8 )
      break;
    if ( v12 <= *(v8 + 0xA) )
      v12 = *(v8 + 0xA);
    v8 += 0x10i64;
  }
  while ( v8 != v11 );
  if ( !v12 )
    goto LABEL_17;
  v13 = 2 * v12;
LABEL_18:
  sub_2CE2B0(a1 + 8, v13);
LABEL_19:
  v14 = *(a1 + 8);
  v15 = *(a1 + 0x10);
  ++*(v14 + 8);
  v16 = *(v14 + 0xC);
  v17 = 0xFFFFFFFF;
  if ( v16 != *(v14 + 0xA) )
  {
    *(v14 + 0xC) = *(*v14 + v16 * v15);
    v17 = v16;
  }
  PlayerInfo = **(a1 + 8) + *(a1 + 0x10) * v17;
  *a2 = PlayerInfo;
  *&v43 = "player_id";
  DWORD2(v43) = 0x3DF932A;
  v19 = sub_2CD450(a3, a4, &v43, 0x1F886EB0, 4, v44, v45);
  if ( v19 )
    v20 = *v19 | 0x7000;
  else
    LOWORD(v20) = 0x7000;
  *(PlayerInfo + 8) = v20;
  *(PlayerInfo + 0x20) = 0x54454E44;
  *(PlayerInfo + 0x28) = 0i64;
  *(PlayerInfo + 0x30) = 0i64;
  *(PlayerInfo + 0x38) = 0i64;
  *(PlayerInfo + 0x40) = 0i64;
  *(PlayerInfo + 0x48) = 2;
  *PlayerInfo = &off_44D8640;
  *(PlayerInfo + 0x58) = 0i64;
  v21 = off_4B678C8;
  *(PlayerInfo + 0x68) = 0i64;
  *(PlayerInfo + 0x70) = v21;
  *(PlayerInfo + 0x78) = 0i64;
  *(PlayerInfo + 0x88) = 0x24800200002i64;
  *(PlayerInfo + 0x10) = PlayerInfo + 0x88;
  *(PlayerInfo + 0x90) = "uid";
  *(PlayerInfo + 0x98) = sub_120A630;
  *(PlayerInfo + 0xA8) = 0xFFFFFFFFFFFFFFFFui64;
  *(PlayerInfo + 0xB0) = 0i64;
  *(PlayerInfo + 0xC0) = 0i64;
  *(PlayerInfo + 0xD0) = 0i64;
  *(PlayerInfo + 0xE0) = 0i64;
  *(PlayerInfo + 0xF0) = 0;
  *(PlayerInfo + 0xF8) = 0x4000000003i64;
  *(PlayerInfo + 0xA0) = PlayerInfo + 0xF8;
  *(PlayerInfo + 0x100) = "invitedNickName";
  v22 = sub_11FC780;
  *(PlayerInfo + 0x108) = sub_11FC780;
  *(PlayerInfo + 0x118) = 0i64;
  *(PlayerInfo + 0x110) = PlayerInfo + 0x120;
  *(PlayerInfo + 0x120) = 4;
  *(PlayerInfo + 0x128) = "nickLocKey";
  *(PlayerInfo + 0x124) = 0x40;
  *(PlayerInfo + 0x130) = sub_11FC690;
  *(PlayerInfo + 0x140) = 0i64;
  *(PlayerInfo + 0x138) = PlayerInfo + 0x148;
  *(PlayerInfo + 0x148) = 5;
  *(PlayerInfo + 0x150) = "clanTag";
  *(PlayerInfo + 0x14C) = 0x40;
  *(PlayerInfo + 0x158) = sub_11FC780;
  *(PlayerInfo + 0x168) = 0i64;
  *(PlayerInfo + 0x160) = PlayerInfo + 0x170;
  *(PlayerInfo + 0x170) = 6;
  *(PlayerInfo + 0x178) = "title";
  *(PlayerInfo + 0x174) = 0x40;
  *(PlayerInfo + 0x180) = sub_11FC780;
  *(PlayerInfo + 0x190) = 0i64;
  *(PlayerInfo + 0x188) = PlayerInfo + 0x198;
  *(PlayerInfo + 0x198) = 7;
  *(PlayerInfo + 0x1A0) = "publicFlags";
  *(PlayerInfo + 0x19A) = 0x200800;
  *(PlayerInfo + 0x1A8) = sub_158DEB0;
  *(PlayerInfo + 0x1B8) = 0;
  *(PlayerInfo + 0x1C0) = 0x4000000008i64;
  *(PlayerInfo + 0x1B0) = PlayerInfo + 0x1C0;
  *(PlayerInfo + 0x1C8) = "decals";
  *(PlayerInfo + 0x1D0) = sub_11FA230;
  *(PlayerInfo + 0x1E0) = 0i64;
  *(PlayerInfo + 0x1D8) = PlayerInfo + 0x1E8;
  *(PlayerInfo + 0x1E8) = 9;
  *(PlayerInfo + 0x1F0) = "team";
  *(PlayerInfo + 0x1EC) = 8;
  *(PlayerInfo + 0x1F8) = sub_11FB210;
  *(PlayerInfo + 0x208) = 0;
  *(PlayerInfo + 0x210) = 0x80000000Ai64;
  *(PlayerInfo + 0x200) = PlayerInfo + 0x210;
  *(PlayerInfo + 0x218) = "countryId";
  *(PlayerInfo + 0x220) = sub_11FB5F0;
  *(PlayerInfo + 0x230) = 0;
  *(PlayerInfo + 0x238) = 0x100000000Bi64;
  *(PlayerInfo + 0x228) = PlayerInfo + 0x238;
  *(PlayerInfo + 0x240) = "memberId";
  *(PlayerInfo + 0x248) = sub_36E370;
  *(PlayerInfo + 0x258) = 0xFFFF;
  *(PlayerInfo + 0x260) = 0xFFFF;
  *(PlayerInfo + 0x264) = 0i64;
  *(PlayerInfo + 0x270) = 0x400000000Ci64;
  *(PlayerInfo + 0x250) = PlayerInfo + 0x270;
  *(PlayerInfo + 0x278) = "customState";
  *(PlayerInfo + 0x280) = sub_11FB6D0;
  *(PlayerInfo + 0x290) = 0i64;
  *(PlayerInfo + 0x288) = PlayerInfo + 0x298;
  *(PlayerInfo + 0x18) = PlayerInfo + 0x298;
  *(PlayerInfo + 0x2B0) = 0i64;
  *(PlayerInfo + 0x298) = 0xD;
  *(PlayerInfo + 0x2A0) = "score";
  *(PlayerInfo + 0x29C) = 0x10;
  *(PlayerInfo + 0x2A8) = sub_36E370;
  *(PlayerInfo + 0x2B8) = 0;
  v23 = (PlayerInfo + 0x2C0);
  *&v43 = PlayerInfo + 0x2C0;
  for ( i = 4i64; i; --i )
    *v23++ = 0xFFFF;
  v25 = (PlayerInfo + 0x2C8);
  *&v43 = PlayerInfo + 0x2C8;
  for ( j = 4i64; j; --j )
    *v25++ = 0xFFFF;
  v27 = (PlayerInfo + 0x2D0);
  *&v43 = PlayerInfo + 0x2D0;
  for ( k = 4i64; k; --k )
    *v27++ = 0xFFFF;
  v29 = (PlayerInfo + 0x2D8);
  *&v43 = PlayerInfo + 0x2D8;
  for ( m = 4i64; m; --m )
    *v29++ = 0xFFFF;
  v31 = (PlayerInfo + 0x2E0);
  *&v43 = PlayerInfo + 0x2E0;
  for ( n = 4i64; n; --n )
    *v31++ = 0xFFFF;
  *(PlayerInfo + 0x2F8) = 0i64;
  *(PlayerInfo + 0x2E8) = 0i64;
  if ( *(PlayerInfo + 0x20) != 0x54454E44 )
    goto LABEL_61;
  v33 = PlayerInfo + 0x2E8;
  v34 = *(PlayerInfo + 0x18);
  v35 = (v34 + 0x18);
  if ( !v34 )
    v35 = (PlayerInfo + 0x10);
  *v35 = v33;
  *(PlayerInfo + 0x18) = v33;
  *(PlayerInfo + 0x300) = 0i64;
  *(PlayerInfo + 0x2E8) = 0xE;
  *(PlayerInfo + 0x2F0) = "dummyForSupportPlanes";
  *(PlayerInfo + 0x2EA) = 0x200000;
  *(PlayerInfo + 0x2F8) = sub_11FCB00;
  *(PlayerInfo + 0x310) = 0i64;
  *(PlayerInfo + 0x320) = 0i64;
  if ( *(PlayerInfo + 0x20) != 0x54454E44 )
    goto LABEL_61;
  *(PlayerInfo + 0x300) = PlayerInfo + 0x310;
  *(PlayerInfo + 0x310) = 0xF;
  *(PlayerInfo + 0x318) = "pilotId";
  *(PlayerInfo + 0x314) = 0x20;
  *(PlayerInfo + 0x320) = sub_158DEB0;
  *(PlayerInfo + 0x330) = 0;
  *(PlayerInfo + 0x338) = 0x2000000010i64;
  *(PlayerInfo + 0x328) = PlayerInfo + 0x338;
  *(PlayerInfo + 0x340) = "disabledByMatchingSlots";
  *(PlayerInfo + 0x348) = sub_158DEB0;
  *(PlayerInfo + 0x358) = 0;
  *(PlayerInfo + 0x360) = 0xFFFFFFFF;
  *(PlayerInfo + 0x368) = 0x2000000011i64;
  *(PlayerInfo + 0x350) = PlayerInfo + 0x368;
  *(PlayerInfo + 0x370) = "brokenSlots";
  *(PlayerInfo + 0x378) = sub_158DEB0;
  *(PlayerInfo + 0x388) = 0;
  *(PlayerInfo + 0x390) = 0x2000000012i64;
  *(PlayerInfo + 0x380) = PlayerInfo + 0x390;
  *(PlayerInfo + 0x398) = "wasReadySlots";
  *(PlayerInfo + 0x3A0) = sub_158DEB0;
  *(PlayerInfo + 0x3B0) = 0xFFFFFFFF;
  *(PlayerInfo + 0x3B8) = 0x2000000013i64;
  *(PlayerInfo + 0x3A8) = PlayerInfo + 0x3B8;
  *(PlayerInfo + 0x3C0) = "spareAircraftInSlots";
  *(PlayerInfo + 0x3C8) = sub_158DEB0;
  *(PlayerInfo + 0x3D8) = 0;
  *(PlayerInfo + 0x3E0) = 0x2000000014i64;
  *(PlayerInfo + 0x3D0) = PlayerInfo + 0x3E0;
  *(PlayerInfo + 0x3E8) = "ownedSlots";
  *(PlayerInfo + 0x3F0) = sub_158DEB0;
  *(PlayerInfo + 0x400) = 0xFFFFFFFF;
  *(PlayerInfo + 0x408) = 0x800000015i64;
  *(PlayerInfo + 0x3F8) = PlayerInfo + 0x408;
  *(PlayerInfo + 0x410) = "classinessMark";
  *(PlayerInfo + 0x418) = sub_36E2B0;
  *(PlayerInfo + 0x428) = 0;
  *(PlayerInfo + 0x430) = 0xFFFFFFFFFFFFFFFFui64;
  *(PlayerInfo + 0x438) = 0x2000000016i64;
  *(PlayerInfo + 0x420) = PlayerInfo + 0x438;
  *(PlayerInfo + 0x440) = "timeToRespawn";
  *(PlayerInfo + 0x448) = sub_158E050;
  *(PlayerInfo + 0x458) = 0xBF800000;
  *(PlayerInfo + 0x460) = 0x2000000017i64;
  *(PlayerInfo + 0x450) = PlayerInfo + 0x460;
  *(PlayerInfo + 0x468) = "timeToRespawnInCoop";
  *(PlayerInfo + 0x470) = sub_158E050;
  *(PlayerInfo + 0x480) = 0;
  *(PlayerInfo + 0x488) = 0x800000018i64;
  *(PlayerInfo + 0x478) = PlayerInfo + 0x488;
  *(PlayerInfo + 0x18) = PlayerInfo + 0x488;
  *(PlayerInfo + 0x490) = "forcedRespawn";
  *(PlayerInfo + 0x498) = sub_36E440;
  *(PlayerInfo + 0x4A8) = 0;
  *(PlayerInfo + 0x4B0) = 0i64;
  *(PlayerInfo + 0x4A0) = PlayerInfo + 0x4B0;
  *(PlayerInfo + 0x4B0) = 0x19;
  *(PlayerInfo + 0x4B8) = "timeToKick";
  *(PlayerInfo + 0x4B4) = 0x20;
  *(PlayerInfo + 0x4C0) = sub_158E050;
  *(PlayerInfo + 0x4D0) = 0xBF800000;
  *(PlayerInfo + 0x4D8) = 0x80020001Ai64;
  *(PlayerInfo + 0x4C8) = PlayerInfo + 0x4D8;
  *(PlayerInfo + 0x4E0) = "guiState";
  *(PlayerInfo + 0x4E8) = sub_36E2B0;
  *(PlayerInfo + 0x4F8) = 1;
  *(PlayerInfo + 0x500) = 0x200000001Bi64;
  *(PlayerInfo + 0x4F0) = PlayerInfo + 0x500;
  *(PlayerInfo + 0x508) = "spectatedModelIndex";
  *(PlayerInfo + 0x510) = sub_158DEB0;
  *(PlayerInfo + 0x520) = 0xFFFFFFFF;
  *(PlayerInfo + 0x528) = 0i64;
  v36 = off_4B678C0;
  *(PlayerInfo + 0x530) = off_4B678C0;
  *(PlayerInfo + 0x538) = 0i64;
  *(PlayerInfo + 0x518) = PlayerInfo + 0x540;
  *(PlayerInfo + 0x540) = 0x1C;
  *(PlayerInfo + 0x548) = "dummyForCountUsedSlots";
  *(PlayerInfo + 0x544) = 0x20;
  *(PlayerInfo + 0x550) = sub_11FC010;
  *(PlayerInfo + 0x568) = 0i64;
  *(PlayerInfo + 0x570) = v36;
  *(PlayerInfo + 0x578) = 0i64;
  *(PlayerInfo + 0x558) = PlayerInfo + 0x580;
  *(PlayerInfo + 0x580) = 0x1D;
  *(PlayerInfo + 0x588) = "dummyForSpawnCosts";
  *(PlayerInfo + 0x584) = 0x20;
  *(PlayerInfo + 0x590) = sub_11FC230;
  *(PlayerInfo + 0x5A8) = 0i64;
  *(PlayerInfo + 0x5B0) = v36;
  *(PlayerInfo + 0x5B8) = 0i64;
  *(PlayerInfo + 0x598) = PlayerInfo + 0x5C0;
  *(PlayerInfo + 0x5C0) = 0x1E;
  *(PlayerInfo + 0x5C8) = "dummyForSpawnDelayTimes";
  *(PlayerInfo + 0x5C4) = 0x20;
  *(PlayerInfo + 0x5D0) = sub_11FC460;
  *(PlayerInfo + 0x5F0) = 0i64;
  *(PlayerInfo + 0x5F8) = v36;
  *(PlayerInfo + 0x600) = 0i64;
  *(PlayerInfo + 0x610) = v36;
  *(PlayerInfo + 0x618) = 0i64;
  *(PlayerInfo + 0x5D8) = PlayerInfo + 0x620;
  *(PlayerInfo + 0x620) = 0x1F;
  *(PlayerInfo + 0x628) = "dummyForKillStreaksProgress";
  *(PlayerInfo + 0x624) = 0x20;
  *(PlayerInfo + 0x630) = sub_11FBC60;
  *(PlayerInfo + 0x648) = 0x800000020i64;
  *(PlayerInfo + 0x638) = PlayerInfo + 0x648;
  *(PlayerInfo + 0x650) = "state";
  *(PlayerInfo + 0x658) = sub_11FA450;
  *(PlayerInfo + 0x668) = 0;
  *(PlayerInfo + 0x67C) = 0;
  *(PlayerInfo + 0x674) = 0i64;
  *(PlayerInfo + 0x660) = PlayerInfo + 0x678;
  *(PlayerInfo + 0x678) = 0x21;
  *(PlayerInfo + 0x680) = &unk_49405E0;
  *(PlayerInfo + 0x67C) = 0x20;
  *(PlayerInfo + 0x688) = sub_158DEB0;
  *(PlayerInfo + 0x698) = 0;
  *(PlayerInfo + 0x6A0) = 0;
  *(PlayerInfo + 0x6A8) = 0i64;
  *(PlayerInfo + 0x6B8) = 0;
  *(PlayerInfo + 0x6C0) = 0i64;
  *(PlayerInfo + 0x6D0) = 0i64;
  *(PlayerInfo + 0x690) = PlayerInfo + 0x6D0;
  *(PlayerInfo + 0x18) = PlayerInfo + 0x6D0;
  *(PlayerInfo + 0x6E8) = 0i64;
  *(PlayerInfo + 0x6D0) = 0x22;
  *(PlayerInfo + 0x6D8) = "ownedUnitOID";
  *(PlayerInfo + 0x6D2) = 0x100020;
  *(PlayerInfo + 0x6E0) = sub_36E370;
  *(PlayerInfo + 0x6F0) = 0xFFFF;
  *(PlayerInfo + 0x708) = 0i64;
  *(PlayerInfo + 0x6F8) = 0i64;
  *(PlayerInfo + 0x718) = 0i64;
  if ( *(PlayerInfo + 0x20) != 0x54454E44 )
    goto LABEL_61;
  *(PlayerInfo + 0x6E8) = PlayerInfo + 0x700;
  *(PlayerInfo + 0x700) = 0x23;
  *(PlayerInfo + 0x708) = "controlledUnit";
  *(PlayerInfo + 0x702) = 0x400020;
  *(PlayerInfo + 0x710) = sub_744290;
  *(PlayerInfo + 0x720) = 0i64;
  *(PlayerInfo + 0x730) = 0x1000000024i64;
  *(PlayerInfo + 0x718) = PlayerInfo + 0x730;
  *(PlayerInfo + 0x738) = "supportUnitId";
  *(PlayerInfo + 0x740) = sub_36E370;
  *(PlayerInfo + 0x750) = 0xFFFF;
  *(PlayerInfo + 0x758) = 0x1000000025i64;
  *(PlayerInfo + 0x748) = PlayerInfo + 0x758;
  *(PlayerInfo + 0x760) = "wreckedPartShipUnitId";
  *(PlayerInfo + 0x768) = sub_36E370;
  *(PlayerInfo + 0x778) = 0xFFFF;
  *(PlayerInfo + 0x780) = 0i64;
  *(PlayerInfo + 0x790) = 0i64;
  *(PlayerInfo + 0x7A0) = 0i64;
  *(PlayerInfo + 0x7B0) = 0i64;
  *(PlayerInfo + 0x7C0) = 0i64;
  *(PlayerInfo + 0x7D0) = 0i64;
  *(PlayerInfo + 0x7E0) = 0i64;
  *(PlayerInfo + 0x7F0) = 0i64;
  *(PlayerInfo + 0x7FC) = 0i64;
  *(PlayerInfo + 0x810) = 0x2000000026i64;
  *(PlayerInfo + 0x770) = PlayerInfo + 0x810;
  *(PlayerInfo + 0x818) = "dummyForRoundScore";
  *(PlayerInfo + 0x820) = sub_11FC910;
  *(PlayerInfo + 0x838) = 0x1000000027i64;
  *(PlayerInfo + 0x828) = PlayerInfo + 0x838;
  *(PlayerInfo + 0x840) = "roundKills";
  *(PlayerInfo + 0x848) = sub_36E370;
  *(PlayerInfo + 0x858) = 0;
  *(PlayerInfo + 0x860) = 0x1000000028i64;
  *(PlayerInfo + 0x850) = PlayerInfo + 0x860;
  *(PlayerInfo + 0x868) = "roundFriendlyKills";
  *(PlayerInfo + 0x870) = sub_36E370;
  *(PlayerInfo + 0x880) = 0;
  *(PlayerInfo + 0x888) = 0x1000000029i64;
  *(PlayerInfo + 0x878) = PlayerInfo + 0x888;
  *(PlayerInfo + 0x890) = "roundDeaths";
  *(PlayerInfo + 0x898) = sub_36E370;
  *(PlayerInfo + 0x8A8) = 0;
  *(PlayerInfo + 0x8B0) = 0x100000002Ai64;
  *(PlayerInfo + 0x8A0) = PlayerInfo + 0x8B0;
  *(PlayerInfo + 0x8B8) = "roundGroundKills";
  *(PlayerInfo + 0x8C0) = sub_36E370;
  *(PlayerInfo + 0x8D0) = 0;
  *(PlayerInfo + 0x8D8) = 0x100000002Bi64;
  *(PlayerInfo + 0x8C8) = PlayerInfo + 0x8D8;
  *(PlayerInfo + 0x8E0) = "roundNavalKills";
  *(PlayerInfo + 0x8E8) = sub_36E370;
  *(PlayerInfo + 0x8F8) = 0;
  *(PlayerInfo + 0x900) = 0x100000002Ci64;
  *(PlayerInfo + 0x8F0) = PlayerInfo + 0x900;
  *(PlayerInfo + 0x908) = "roundAiKills";
  *(PlayerInfo + 0x910) = sub_36E370;
  *(PlayerInfo + 0x920) = 0;
  *(PlayerInfo + 0x928) = 0i64;
  *(PlayerInfo + 0x918) = PlayerInfo + 0x928;
  *(PlayerInfo + 0x928) = 0x2D;
  *(PlayerInfo + 0x930) = "roundAiGroundKills";
  *(PlayerInfo + 0x92C) = 0x10;
  *(PlayerInfo + 0x938) = sub_36E370;
  *(PlayerInfo + 0x948) = 0;
  *(PlayerInfo + 0x950) = 0x100000002Ei64;
  *(PlayerInfo + 0x940) = PlayerInfo + 0x950;
  *(PlayerInfo + 0x958) = "roundAiNavalKills";
  *(PlayerInfo + 0x960) = sub_36E370;
  *(PlayerInfo + 0x970) = 0;
  *(PlayerInfo + 0x978) = 0x100000002Fi64;
  *(PlayerInfo + 0x968) = PlayerInfo + 0x978;
  *(PlayerInfo + 0x980) = "roundRepairsFromDeath";
  *(PlayerInfo + 0x988) = sub_36E370;
  *(PlayerInfo + 0x998) = 0;
  *(PlayerInfo + 0x9A0) = 0x1000000030i64;
  *(PlayerInfo + 0x990) = PlayerInfo + 0x9A0;
  *(PlayerInfo + 0x9A8) = "roundAssists";
  *(PlayerInfo + 0x9B0) = sub_36E370;
  *(PlayerInfo + 0x9C0) = 0;
  *(PlayerInfo + 0x9C8) = 0x1000000031i64;
  *(PlayerInfo + 0x9B8) = PlayerInfo + 0x9C8;
  *(PlayerInfo + 0x9D0) = "roundCaptureZone";
  *(PlayerInfo + 0x9D8) = sub_36E370;
  *(PlayerInfo + 0x9E8) = 0;
  *(PlayerInfo + 0x9F0) = 0x2000000032i64;
  *(PlayerInfo + 0x9E0) = PlayerInfo + 0x9F0;
  *(PlayerInfo + 0x9F8) = "roundDamageZone";
  *(PlayerInfo + 0xA00) = sub_158DEB0;
  *(PlayerInfo + 0xA10) = 0;
  *(PlayerInfo + 0xA18) = 0x2000000033i64;
  *(PlayerInfo + 0xA08) = PlayerInfo + 0xA18;
  *(PlayerInfo + 0xA20) = "roundDestroyZone";
  *(PlayerInfo + 0xA28) = sub_158DEB0;
  *(PlayerInfo + 0xA38) = 0;
  *(PlayerInfo + 0xA40) = 0x1000000034i64;
  *(PlayerInfo + 0xA30) = PlayerInfo + 0xA40;
  *(PlayerInfo + 0xA48) = "roundSpawnScore";
  *(PlayerInfo + 0xA50) = sub_36E370;
  *(PlayerInfo + 0xA60) = 0;
  *(PlayerInfo + 0xA68) = 0x1000000035i64;
  *(PlayerInfo + 0xA58) = PlayerInfo + 0xA68;
  *(PlayerInfo + 0xA70) = "roundSpawnWithKillStreakCount";
  *(PlayerInfo + 0xA78) = sub_36E370;
  *(PlayerInfo + 0xA88) = 0;
  *(PlayerInfo + 0xA90) = 0x4000000036i64;
  *(PlayerInfo + 0xA80) = PlayerInfo + 0xA90;
  *(PlayerInfo + 0xA98) = "realNick";
  *(PlayerInfo + 0xAA0) = sub_11FC780;
  *(PlayerInfo + 0xAB0) = 0i64;
  *(PlayerInfo + 0xAA8) = PlayerInfo + 0xAB8;
  *(PlayerInfo + 0x18) = PlayerInfo + 0xAB8;
  *(PlayerInfo + 0xAD0) = 0i64;
  *(PlayerInfo + 0xAB8) = 0x37;
  *(PlayerInfo + 0xAC0) = "roundKillStreakSpareUsedCount";
  *(PlayerInfo + 0xABC) = 0x10;
  *(PlayerInfo + 0xAC8) = sub_36E370;
  *(PlayerInfo + 0xAD8) = 0;
  *(PlayerInfo + 0xAF0) = 0i64;
  *(PlayerInfo + 0xAE0) = 0i64;
  if ( *(PlayerInfo + 0x20) != 0x54454E44 )
    goto LABEL_61;
  *(PlayerInfo + 0xAD0) = PlayerInfo + 0xAE0;
  *(PlayerInfo + 0xAE0) = 0x38;
  *(PlayerInfo + 0xAE8) = "roundScoutKills";
  *(PlayerInfo + 0xAE4) = 0x10;
  *(PlayerInfo + 0xAF0) = sub_36E370;
  *(PlayerInfo + 0xB00) = 0;
  *(PlayerInfo + 0xB08) = 0x1000000039i64;
  *(PlayerInfo + 0xAF8) = PlayerInfo + 0xB08;
  *(PlayerInfo + 0xB10) = "deathTimeFromStartSessionSec";
  *(PlayerInfo + 0xB18) = sub_36E370;
  *(PlayerInfo + 0xB28) = 0;
  *(PlayerInfo + 0xB30) = 0x200000003Ai64;
  *(PlayerInfo + 0xB20) = PlayerInfo + 0xB30;
  *(PlayerInfo + 0xB38) = "squadronId";
  *(PlayerInfo + 0xB40) = sub_158DEB0;
  *(PlayerInfo + 0xB58) = 0x200000003Bi64;
  *(PlayerInfo + 0xB48) = PlayerInfo + 0xB58;
  *(PlayerInfo + 0xB60) = &unk_495BF86;
  *(PlayerInfo + 0xB68) = sub_158DEB0;
  *(PlayerInfo + 0xB78) = 0;
  *(PlayerInfo + 0xB80) = 0x400000003Ci64;
  *(PlayerInfo + 0xB70) = PlayerInfo + 0xB80;
  *(PlayerInfo + 0xB88) = "forceLockTarget";
  *(PlayerInfo + 0xB90) = sub_744290;
  *(PlayerInfo + 0xBB0) = 0x200000003Di64;
  *(PlayerInfo + 0xBA0) = 0i64;
  *(PlayerInfo + 0xBA6) = 0i64;
  *(PlayerInfo + 0xB98) = PlayerInfo + 0xBB0;
  *(PlayerInfo + 0xBB8) = "dummyForFootballStat";
  *(PlayerInfo + 0xBC0) = sub_11FCA50;
  *(PlayerInfo + 0xBD8) = 0x80000003Ei64;
  *(PlayerInfo + 0xBC8) = PlayerInfo + 0xBD8;
  *(PlayerInfo + 0xBE0) = "cachedIsAutoSquad";
  *(PlayerInfo + 0xBE8) = sub_36E440;
  *(PlayerInfo + 0xC00) = 0x400000003Fi64;
  *(PlayerInfo + 0xBF0) = PlayerInfo + 0xC00;
  *(PlayerInfo + 0xC08) = "xuid";
  *(PlayerInfo + 0xC10) = sub_120A560;
  *(PlayerInfo + 0xC20) = 0i64;
  *(PlayerInfo + 0xC18) = PlayerInfo + 0xC28;
  *(PlayerInfo + 0x18) = PlayerInfo + 0xC28;
  *(PlayerInfo + 0xC40) = 0i64;
  *(PlayerInfo + 0xC28) = 0x40;
  *(PlayerInfo + 0xC30) = "nickFrame";
  *(PlayerInfo + 0xC2C) = 0x40;
  *(PlayerInfo + 0xC38) = sub_11FC780;
  *(PlayerInfo + 0xC64) = 0;
  *(PlayerInfo + 0xCF0) = 0i64;
  v37 = off_4B678C0;
  *(PlayerInfo + 0xCF8) = 0i64;
  *(PlayerInfo + 0xD00) = v37;
  *(PlayerInfo + 0xD08) = 0i64;
  *(PlayerInfo + 0xD18) = 0;
  *(PlayerInfo + 0xD1C) = 0x40800000;
  *(PlayerInfo + 0xD20) = 0i64;
  *(PlayerInfo + 0xD28) = v37;
  *(PlayerInfo + 0xD30) = 0i64;
  *(PlayerInfo + 0xD40) = v37;
  *(PlayerInfo + 0xD48) = 0i64;
  *(PlayerInfo + 0xD58) = v37;
  *(PlayerInfo + 0xD60) = 0i64;
  *(PlayerInfo + 0xD70) = v37;
  *(PlayerInfo + 0xD78) = 0i64;
  *(PlayerInfo + 0xD88) = v37;
  *(PlayerInfo + 0xD90) = 0i64;
  *(PlayerInfo + 0xDA0) = v37;
  *(PlayerInfo + 0xDA8) = 0i64;
  *(PlayerInfo + 0xDB4) = 0i64;
  *(PlayerInfo + 0xDC4) = 0i64;
  *(PlayerInfo + 0xDD4) = 0i64;
  *(PlayerInfo + 0xDE4) = 0i64;
  *(PlayerInfo + 0xDF0) = 0i64;
  *(PlayerInfo + 0xE00) = v37;
  *(PlayerInfo + 0xE08) = 0i64;
  *(PlayerInfo + 0xEB0) = 0i64;
  *(PlayerInfo + 0xEB8) = 0;
  *(PlayerInfo + 0xE90) = 0i64;
  *(PlayerInfo + 0xE98) = 0;
  *(PlayerInfo + 0xEC0) = 0i64;
  *(PlayerInfo + 0xED0) = v37;
  *(PlayerInfo + 0xED8) = 0i64;
  *(PlayerInfo + 0xEE0) = 0;
  *(PlayerInfo + 0xEE8) = 0xFFFFFFFFFFFFFFFFui64;
  *(PlayerInfo + 0xEF0) = 0xBF800000;
  *(PlayerInfo + 0xEF8) = 0;
  v38 = off_4B678C8;
  *(PlayerInfo + 0xF00) = 0i64;
  *(PlayerInfo + 0xF08) = v38;
  *(PlayerInfo + 0xF10) = 0i64;
  v39 = (*(*v37 + 0x18i64))(v37, 0x88i64);
  memmove(v39, *(PlayerInfo + 0xDF8), 0x44i64 * *(PlayerInfo + 0xE08));
  if ( *(PlayerInfo + 0xDF8) )
    (*(**(PlayerInfo + 0xE00) + 0x40i64))(*(PlayerInfo + 0xE00));
  *(PlayerInfo + 0xDF8) = v39;
  *(PlayerInfo + 0xE0C) = 2;
  sub_11FD000(PlayerInfo, 0i64);
  if ( g_net && !*(g_net + 0x60) )
  {
    if ( *(PlayerInfo + 0x20) == 0x54454E44 )
    {
      if ( (*(PlayerInfo + 0x48) & 2) != 0 )
      {
        EnterCriticalSection(&stru_4B68360);
        if ( !*(PlayerInfo + 0x38) && xmmword_4B683B0 != PlayerInfo )
        {
          v40 = *(&xmmword_4B683B0 + 1);
          if ( *(&xmmword_4B683B0 + 1) )
          {
            *(*(&xmmword_4B683B0 + 1) + 0x40i64) = PlayerInfo;
            *(PlayerInfo + 0x38) = v40;
            v41 = (&xmmword_4B683B0 + 8);
          }
          else
          {
            *(&xmmword_4B683B0 + 1) = PlayerInfo;
            v41 = &xmmword_4B683B0;
          }
          *v41 = PlayerInfo;
        }
        LeaveCriticalSection(&stru_4B68360);
        *(PlayerInfo + 0x48) &= ~2u;
      }
      return;
    }
LABEL_61:
    *(&v43 + 1) = PlayerInfo;
    LODWORD(v43) = 5;
    LOBYTE(v22) = 1;
    log_err(
      "../../prog/gameLibs/publicInclude\\daNet/reflection.h",
      0x13F,
      v22,
      "Reflection: invalid object 0x%p",
      &v43,
      1);
  }
}
