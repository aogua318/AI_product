// 函数 0x468300  sub_468300  size=0x49  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_468300(_WORD *a1, unsigned __int8 *a2, int a3)
{
  int v3; // ebx

  v3 = a3;
  if ( a3 > 0 )
  {
    do
    {
      *a1 = ((int)*a2 >> 3) | (4 * (a2[1] & 0xF8 | (32 * (a2[2] & 0xF8))));
      a2 += 3;
      ++a1;
      --v3;
    }
    while ( v3 );
  }
}
