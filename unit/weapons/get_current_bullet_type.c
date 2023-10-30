__int64 __fastcall get_current_bullet_type(unsigned int bullet_index)
{
  unsigned int def_bullet_type; // r14d
  __int64 UnitWeaponInfo; // rax
  __int64 bullet_type_index; // rcx
  __int64 bullet_list; // rsi
  __int64 bullet_count; // rbx
  __int64 current_bullet; // rbp
  unsigned __int8 *current_bullet_data; // rdi

  def_bullet_type = 0xFFFFFFFF;
  if ( LocalUnit )
  {
    if ( (*(LocalUnit + 0x1058) & 0x7000014) == 0 )
    {
      UnitWeaponInfo = *(LocalUnit + 0x11D0);
      if ( UnitWeaponInfo )
      {
        bullet_type_index = 3i64 * bullet_index;
        if ( *(UnitWeaponInfo + 8 * bullet_type_index + 0x328) )
        {
          bullet_list = *(UnitWeaponInfo + 8 * bullet_type_index + 0x318);
          bullet_count = 8i64 * *(UnitWeaponInfo + 8 * bullet_type_index + 0x328);
          current_bullet = 0i64;
          while ( 1 )
          {
            current_bullet_data = *(bullet_list + current_bullet);
            if ( current_bullet_data )
            {
              if ( (*(*current_bullet_data + 0x108i64))(*(bullet_list + current_bullet)) )
                break;
            }
            current_bullet += 8i64;
            if ( bullet_count == current_bullet )
              return def_bullet_type;
          }
          if ( (*(*current_bullet_data + 0x108i64))(current_bullet_data) )
            return current_bullet_data[0x43C];
        }
      }
    }
  }
  return def_bullet_type;
}
