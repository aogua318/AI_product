// 函数 0x499956  _wcslen  size=0x1B  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

size_t __cdecl wcslen(const wchar_t *String)
{
  const wchar_t *v1; // eax

  v1 = String;
  while ( *v1++ )
    ;
  return v1 - String - 1;
}
