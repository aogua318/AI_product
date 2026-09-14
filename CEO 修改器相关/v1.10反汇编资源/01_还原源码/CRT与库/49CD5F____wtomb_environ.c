// 函数 0x49cd5f  ___wtomb_environ  size=0x97  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __wtomb_environ()
{
  LPCWCH *v0; // edi
  const WCHAR *v1; // eax
  int v2; // eax
  void *v3; // eax
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  void *Block; // [esp+10h] [ebp-4h] BYREF

  v0 = (LPCWCH *)dword_8F2B58;
  Block = 0;
  v1 = *(const WCHAR **)dword_8F2B58;
  if ( !*(_DWORD *)dword_8F2B58 )
    return 0;
  while ( 1 )
  {
    v2 = WideCharToMultiByte(0, 0, v1, -1, 0, 0, 0, 0);
    cbMultiByte = v2;
    if ( !v2 )
      break;
    v3 = (void *)_calloc_crt(v2, 1);
    Block = v3;
    if ( !v3 )
      break;
    if ( !WideCharToMultiByte(0, 0, *v0, -1, (LPSTR)v3, cbMultiByte, 0, 0) )
    {
      free(Block);
      return -1;
    }
    if ( (int)__crtsetenv(&Block, 0) < 0 )
    {
      if ( Block )
      {
        free(Block);
        Block = 0;
      }
    }
    v1 = *++v0;
    if ( !*v0 )
      return 0;
  }
  return -1;
}
