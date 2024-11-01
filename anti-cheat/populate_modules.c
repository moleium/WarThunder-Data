__int64 __fastcall populate_loaded_modules(__int64 param1, __int64 param2)
{
  /*
  * Populates loaded modules of current process using Toolhelp32Snapshot.
  * Gets module info (name, size, base addr) and stores it in array indexed by name hash.
  */

  strcpy(dll_name, "kernel32.dll");
  k32_lib = LoadLibraryA(dll_name);
  strcpy(dll_name, "CreateToolhelp32Snapshot");
  CreateSnapshotFunc = GetProcAddress(k32_lib, dll_name);
  strcpy(dll_name, "Module32First");
  ModuleFirstFunc = GetProcAddress(k32_lib, dll_name);
  strcpy(dll_name, "Module32Next");
  ModuleNextFunc = GetProcAddress(k32_lib, dll_name);
  strcpy(dll_name, "GetCurrentProcessId");
  GetProcessIdFunc = GetProcAddress(k32_lib, dll_name);
  strcpy(dll_name, "CloseHandle");
  CloseHandleFunc = GetProcAddress(k32_lib, dll_name);
  result = 0;
  if ( CreateSnapshotFunc )
  {
    if ( ModuleFirstFunc )
    {
      if ( ModuleNextFunc )
      {
        if ( GetProcessIdFunc )
        {
          CloseHandleFunc_ = CloseHandleFunc;
          if ( CloseHandleFunc )
          {
            current_pid = GetProcessIdFunc();
            snapshot_handle = (CreateSnapshotFunc)(8i64, current_pid);
            if ( snapshot_handle != 0xFFFFFFFFFFFFFFFFui64 )
            {
              module_snapshot = snapshot_handle;
              v32[0] = 0x238;
              if ( (ModuleFirstFunc)(snapshot_handle, v32) )
              {
                _CloseHandleFunc = CloseHandleFunc_;
                if ( (ModuleNextFunc)(module_snapshot, v32) )
                {
                  if ( param2 )
                  {
                    do
                    {
                      char_byte = module_name[0];
                      if ( module_name[0] )
                      {
                        char_pointer = &module_name[1];
                        do
                        {
                          char_pointer[0xFFFFFFFF] = byte_4B71A50[char_byte];
                          char_byte = *char_pointer++;
                        }
                        while ( char_byte );
                        transformed_byte = module_name[0];
                        if ( module_name[0] )
                        {
                          transformed_pointer = &module_name[1];
                          do
                          {
                            transformed_pointer[0xFFFFFFFF] = transformed_byte + 5;
                            transformed_byte = *transformed_pointer++;
                          }
                          while ( transformed_byte );
                        }
                      }
                      str_length = strlen(module_name);
                      name_id = data::get_name_id(module_name, str_length);
                      if ( sub_128A70(param2, module_name, str_length, name_id) < 0 )
                      {
                        transformed_strlength = strlen(module_name);
                        transformed_moduleid = data::get_name_id(module_name, transformed_strlength);
                        sub_127A00(param1, module_name, transformed_strlength, transformed_moduleid);
                      }
                    }
                    while ( (ModuleNextFunc)(module_snapshot, v32) );
                  }
                  else
                  {
                    do
                    {
                      initial_byte = module_name[0];
                      if ( module_name[0] )
                      {
                        byte_pointer = &module_name[1];
                        do
                        {
                          byte_pointer[0xFFFFFFFF] = byte_4B71A50[initial_byte];
                          initial_byte = *byte_pointer++;
                        }
                        while ( initial_byte );
                        modified_byte = module_name[0];
                        if ( module_name[0] )
                        {
                          modified_pointer = &module_name[1];
                          do
                          {
                            modified_pointer[0xFFFFFFFF] = modified_byte + 5;
                            modified_byte = *modified_pointer++;
                          }
                          while ( modified_byte );
                        }
                      }
                      final_str_length = strlen(module_name);
                      final_moduleid = data::get_name_id(module_name, final_str_length);
                      sub_127A00(param1, module_name, final_str_length, final_moduleid);
                    }
                    while ( (ModuleNextFunc)(module_snapshot, v32) );
                  }
                }
                _CloseHandleFunc(module_snapshot);
                return *(param1 + 0x20);
              }
              else
              {
                CloseHandleFunc_(module_snapshot);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}