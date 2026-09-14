// 函数 0x495eb0  __get_osfhandle  size=0x69  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v2; // ecx
  int v3; // eax

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= uNumber
    || (v2 = dword_8F61C0[FileHandle >> 5], v3 = (FileHandle & 0x1F) << 6, (*(_BYTE *)(v3 + v2 + 4) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  return *(_DWORD *)(v3 + v2);
}
