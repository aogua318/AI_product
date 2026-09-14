// 函数 0x468760  sub_468760  size=0x27  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_468760(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // eax

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = a2;
    do
    {
      if ( *(_BYTE *)(v4 + 3) )
        *(_DWORD *)(a1 - a2 + v4) = *(_DWORD *)v4;
      v4 += 4;
      --v3;
    }
    while ( v3 );
  }
}
