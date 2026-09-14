// 函数 0x49b56b  __getenv_helper_nolock  size=0x87  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

const char *__cdecl _getenv_helper_nolock(char *Str)
{
  const char **v1; // esi
  size_t v3; // edi

  v1 = (const char **)dword_8F2B50;
  if ( !dword_8F72EC )
    return 0;
  if ( dword_8F2B50 || dword_8F2B58 && !__wtomb_environ() && (v1 = (const char **)dword_8F2B50) != 0 )
  {
    if ( Str )
    {
      v3 = strlen(Str);
      while ( *v1 )
      {
        if ( strlen(*v1) > v3
          && (*v1)[v3] == 61
          && !_mbsnbicoll((const unsigned __int8 *)*v1, (const unsigned __int8 *)Str, v3) )
        {
          return &(*v1)[v3 + 1];
        }
        ++v1;
      }
    }
  }
  return 0;
}
