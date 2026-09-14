// 函数 0x48ad20  __fsopen  size=0xBC  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

FILE *__cdecl _fsopen(const char *FileName, const char *Mode, int ShFlag)
{
  int v5; // eax
  FILE *v6; // [esp+10h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h] BYREF
  FILE *FileNamea; // [esp+34h] [ebp+8h]

  if ( !FileName || !Mode || !*Mode )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  v5 = _getstream();
  FileNamea = (FILE *)v5;
  if ( !v5 )
  {
    *_errno() = 24;
    return 0;
  }
  ms_exc.registration.TryLevel = 0;
  if ( !*FileName )
  {
    *_errno() = 22;
    _local_unwind4(&dword_4B8254, &ms_exc.registration, -2);
    return 0;
  }
  v6 = (FILE *)_openfile((char *)FileName, (int)Mode, ShFlag, v5);
  _unlock_file(FileNamea);
  return v6;
}
