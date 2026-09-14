// 函数 0x49d4ef  __strdup  size=0x52  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

char *__cdecl _strdup(const char *Source)
{
  size_t v2; // esi
  char *v3; // eax
  char *v4; // edi

  if ( !Source )
    return 0;
  v2 = strlen(Source) + 1;
  v3 = (char *)malloc(v2);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( strcpy_s(v3, v2, Source) )
    _invoke_watson(0, 0, 0, 0, 0);
  return v4;
}
