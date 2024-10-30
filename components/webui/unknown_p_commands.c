void __fastcall unknown_p_commands(__int64 data, __int64 a2, const char *name, __int64 a4)
{
  unsigned __int8 current_char; // al
  const char *next_char; // rdx
  unsigned int hash_value; // ecx
  __int64 hash_index; // rax
  unsigned __int64 cmdlist_size; // r12
  __int64 cmdlist_start; // r13
  __int64 current_cmd; // rsi
  const char *current_cmd_name; // rcx
  __int64 cmd_status; // r8
  float cmd_parameter; // xmm2_4
  __int64 next_cmd; // rsi

  if ( name )
  {
    current_char = *name;
    if ( *name )
    {
      if ( !unk_4B8FF40 && !unk_4B8FF48 && !unk_4B8FF50 && xmmword_4B8FF58 == 0 && !unk_4B8FF68 && xmmword_4B8FF70 == 0 )
      {
        next_char = name + 1;
        hash_value = 0x811C9DC5;
        do
        {
          hash_value = current_char ^ (0x1000193 * hash_value);
          current_char = *next_char++;
        }
        while ( current_char );
        hash_index = hash_value;
        cmdlist_size = *(a2 + 0x10);
        if ( hash_value >= cmdlist_size )
          hash_index = hash_value % cmdlist_size;
        cmdlist_start = *(a2 + 8);
        current_cmd = *(cmdlist_start + 8 * hash_index);
        if ( current_cmd )
        {
          while ( 1 )
          {
            current_cmd_name = *current_cmd;
            if ( !*current_cmd )
              current_cmd_name = &szFile;
            if ( !strcmp(current_cmd_name, name) )
              break;
            current_cmd = *(current_cmd + 0x90);
            if ( !current_cmd )
              return;
          }
          if ( current_cmd != *(cmdlist_start + 8 * cmdlist_size) )
          {
            cmd_parameter = *(current_cmd + 0x18);
            next_cmd = current_cmd + 8;
            if ( cmd_parameter <= 0.0 )
              sub_F1AC70(next_cmd, a4);
            else
              sub_F1C8C0(data, next_cmd, cmd_status, a4);
          }
        }
      }
    }
  }
}
