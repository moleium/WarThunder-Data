float __fastcall get_option_multiplier(int a1)
{
  float result; // xmm0_4

  result = 0.0;
  if ( game )
  {
    switch ( a1 )
    {
      case 0:
        result = *(*(game + 0x430) + 0xBCi64);
        break;
      case 1:
        result = *(*(game + 0x430) + 0xC0i64);
        break;
      case 2:
        result = *(*(game + 0x430) + 0xC4i64);
        break;
      case 3:
        result = *(*(game + 0x430) + 0xC8i64);
        break;
      case 4:
        result = *(*(game + 0x430) + 0xCCi64);
        break;
      case 5:
        result = *(*(game + 0x430) + 0xD0i64);
        break;
      case 6:
        result = *(*(game + 0x430) + 0x150i64);
        break;
      case 7:
        result = *(*(game + 0x430) + 0x154i64);
        break;
      case 8:
        result = *(*(game + 0x430) + 0x170i64);
        break;
      case 9:
        result = *(*(game + 0x430) + 0x174i64);
        break;
      case 0xA:
        result = *(*(game + 0x430) + 0x178i64);
        break;
      case 0xB:
        result = *(*(game + 0x430) + 0x17Ci64);
        break;
      case 0xC:
        result = *(*(game + 0x430) + 0x188i64);
        break;
      case 0xD:
        result = *(*(game + 0x430) + 0x18Ci64);
        break;
      case 0xE:
        result = *(*(game + 0x430) + 0x180i64);
        break;
      case 0xF:
        result = *(*(game + 0x430) + 0x184i64);
        break;
      case 0x10:
        result = *(*(game + 0x430) + 0x190i64);
        break;
      case 0x11:
        result = *(*(game + 0x430) + 0x194i64);
        break;
      case 0x12:
        result = *(*(game + 0x430) + 0x198i64);
        break;
      case 0x13:
        result = *(*(game + 0x430) + 0x19Ci64);
        break;
      case 0x14:
        result = *(*(game + 0x430) + 0x1F8i64);
        break;
      case 0x15:
        result = *(*(game + 0x430) + 0x1FCi64);
        break;
      case 0x16:
        result = *(*(game + 0x430) + 0x200i64);
        break;
      case 0x17:
        result = *(*(game + 0x430) + 0x15Ci64);
        break;
      case 0x18:
        result = *(*(game + 0x430) + 0x160i64);
        break;
      case 0x19:
        result = *(*(game + 0x430) + 0x158i64);
        break;
      case 0x1A:
        result = *(*(game + 0x430) + 0x164i64);
        break;
      case 0x1B:
        result = *(*(game + 0x430) + 0x168i64);
        break;
      case 0x1C:
        result = *(*(game + 0x430) + 0x204i64);
        break;
      case 0x1D:
        result = *(*(game + 0x430) + 0x208i64);
        break;
      case 0x1E:
        result = *(*(game + 0x430) + 0x2ECi64);
        break;
      case 0x1F:
        result = *(*(game + 0x430) + 0x2F0i64);
        break;
      case 0x20:
        result = *(*(game + 0x430) + 0x148i64);
        break;
      case 0x21:
        result = *(*(game + 0x430) + 0x14Ci64);
        break;
      case 0x22:
        result = *(*(game + 0x430) + 0x1ACi64);
        break;
      case 0x23:
        result = *(*(game + 0x430) + 0x1B0i64);
        break;
      case 0x24:
        result = *(*(game + 0x430) + 0x1B4i64);
        break;
      case 0x25:
        result = *(*(game + 0x430) + 0x1B8i64);
        break;
      case 0x26:
        result = *(*(game + 0x430) + 0x1BCi64);
        break;
      case 0x27:
        result = *(*(game + 0x430) + 0x1C0i64);
        break;
      case 0x28:
        result = *(*(game + 0x430) + 0x1C4i64);
        break;
      case 0x29:
        result = *(*(game + 0x430) + 0x1C8i64);
        break;
      case 0x2A:
        result = *(*(game + 0x430) + 0x1CCi64);
        break;
      case 0x2B:
        result = *(*(game + 0x430) + 0x1D0i64);
        break;
      case 0x2C:
        result = *(*(game + 0x430) + 0x1D4i64);
        break;
      case 0x2D:
        result = *(*(game + 0x430) + 0x1D8i64);
        break;
      case 0x2E:
        result = *(*(game + 0x430) + 0x1DCi64);
        break;
      case 0x2F:
        result = *(*(game + 0x430) + 0x1E0i64);
        break;
      case 0x30:
        result = *(*(game + 0x430) + 0x1E4i64);
        break;
      case 0x31:
        result = *(*(game + 0x430) + 0x1E8i64);
        break;
      case 0x32:
        result = *(*(game + 0x430) + 0x1ECi64);
        break;
      case 0x33:
        result = *(*(game + 0x430) + 0x1F0i64);
        break;
      default:
        return result;
    }
  }
  return result;
}
