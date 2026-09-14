// 函数 0x493726  ___crtGetEnvironmentStringsA  size=0x97  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

CHAR *__crtGetEnvironmentStringsA()
{
  LPWCH EnvironmentStringsW; // eax
  WCHAR *v1; // ebx
  size_t v3; // eax
  CHAR *v4; // eax
  int cchWideChar; // [esp+8h] [ebp-Ch]
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  CHAR *Block; // [esp+10h] [ebp-4h]

  EnvironmentStringsW = GetEnvironmentStringsW();
  v1 = EnvironmentStringsW;
  if ( !EnvironmentStringsW )
    return 0;
  for ( ; *EnvironmentStringsW; ++EnvironmentStringsW )
  {
    do
      ++EnvironmentStringsW;
    while ( *EnvironmentStringsW );
  }
  cchWideChar = EnvironmentStringsW - v1 + 1;
  v3 = WideCharToMultiByte(0, 0, v1, cchWideChar, 0, 0, 0, 0);
  cbMultiByte = v3;
  if ( v3 && (v4 = (CHAR *)_malloc_crt(v3), (Block = v4) != 0) )
  {
    if ( !WideCharToMultiByte(0, 0, v1, cchWideChar, v4, cbMultiByte, 0, 0) )
    {
      free(Block);
      Block = 0;
    }
    FreeEnvironmentStringsW(v1);
    return Block;
  }
  else
  {
    FreeEnvironmentStringsW(v1);
    return 0;
  }
}
