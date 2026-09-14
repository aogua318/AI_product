// 函数 0x474ef0  sub_474EF0  size=0x2E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_474EF0(int a1)
{
  int v1; // esi
  int v2; // edi

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    do
    {
      free(*(void **)v1);
      v2 = *(_DWORD *)(v1 + 12);
      free((void *)v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
