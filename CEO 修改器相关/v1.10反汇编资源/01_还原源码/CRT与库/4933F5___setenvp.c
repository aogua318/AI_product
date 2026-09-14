// 函数 0x4933f5  __setenvp  size=0xDB  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int _setenvp()
{
  char *v0; // esi
  int v1; // edi
  char **v3; // edi
  char *i; // esi
  size_t v5; // eax
  rsize_t v6; // ebx
  char *v7; // eax

  if ( !dword_8F72F8 )
    __initmbctable();
  v0 = dword_8F2B84;
  v1 = 0;
  if ( !dword_8F2B84 )
    return -1;
  while ( *v0 )
  {
    if ( *v0 != 61 )
      ++v1;
    v0 += strlen(v0) + 1;
  }
  v3 = (char **)_calloc_crt(v1 + 1, 4);
  dword_8F2B50 = v3;
  if ( !v3 )
    return -1;
  for ( i = dword_8F2B84; ; i += v6 )
  {
    if ( !*i )
    {
      free(dword_8F2B84);
      dword_8F2B84 = 0;
      *v3 = 0;
      dword_8F72EC = 1;
      return 0;
    }
    v5 = strlen(i);
    v6 = v5 + 1;
    if ( *i != 61 )
      break;
LABEL_15:
    ;
  }
  v7 = (char *)_calloc_crt(v5 + 1, 1);
  *v3 = v7;
  if ( v7 )
  {
    if ( strcpy_s(v7, v6, i) )
      _invoke_watson(0, 0, 0, 0, 0);
    ++v3;
    goto LABEL_15;
  }
  free(dword_8F2B50);
  dword_8F2B50 = 0;
  return -1;
}
