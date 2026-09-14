// 函数 0x493396  __wincmdln  size=0x5F  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

const CHAR *_wincmdln()
{
  BOOL v0; // edi
  const CHAR *v1; // esi
  unsigned __int8 v2; // al

  v0 = 0;
  if ( !dword_8F72F8 )
    __initmbctable();
  v1 = (const CHAR *)dword_8F72E4;
  if ( !dword_8F72E4 )
    v1 = byte_4A2869;
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 <= 0x20u )
    {
      if ( !v2 )
        return v1;
      if ( !v0 )
        break;
    }
    if ( v2 == 34 )
      v0 = !v0;
    if ( _ismbblead(v2) )
      ++v1;
    ++v1;
  }
  while ( *v1 && *v1 <= 0x20u )
    ++v1;
  return v1;
}
