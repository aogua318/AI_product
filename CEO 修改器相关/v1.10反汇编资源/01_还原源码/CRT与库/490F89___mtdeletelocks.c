// 函数 0x490f89  __mtdeletelocks  size=0x57  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void _mtdeletelocks()
{
  LPCRITICAL_SECTION *v0; // esi
  LPCRITICAL_SECTION v1; // edi
  LPCRITICAL_SECTION *v2; // esi

  v0 = &lpCriticalSection;
  do
  {
    v1 = *v0;
    if ( *v0 && v0[1] != (LPCRITICAL_SECTION)1 )
    {
      DeleteCriticalSection(*v0);
      free(v1);
      *v0 = 0;
    }
    v0 += 2;
  }
  while ( (int)v0 < (int)dword_4B8890 );
  v2 = &lpCriticalSection;
  do
  {
    if ( *v2 )
    {
      if ( v2[1] == (LPCRITICAL_SECTION)1 )
        DeleteCriticalSection(*v2);
    }
    v2 += 2;
  }
  while ( (int)v2 < (int)dword_4B8890 );
}
