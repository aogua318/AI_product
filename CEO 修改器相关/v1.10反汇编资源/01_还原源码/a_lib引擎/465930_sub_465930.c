// 函数 0x465930  sub_465930  size=0x27  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_465930(char *a1, unsigned __int16 a2, int a3)
{
  char *v3; // edi
  int i; // ecx

  if ( a3 > 0 )
  {
    memset32(a1, (a2 << 16) | a2, (unsigned int)a3 >> 1);
    v3 = &a1[4 * ((unsigned int)a3 >> 1)];
    for ( i = a3 & 1; i; --i )
    {
      *(_WORD *)v3 = a2;
      v3 += 2;
    }
  }
}
