// 函数 0x47b930  sub_47B930  size=0x5E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47B930(const char *a1, int a2)
{
  const char *v2; // edx
  int result; // eax
  int v4; // esi
  int v5; // ecx

  v2 = a1;
  result = strlen(a1);
  if ( a2 >= 0 && (a2 <= 1 || a2 == 3) && result > 0 )
  {
    v4 = 0;
    v5 = result;
    do
    {
      if ( *v2 >= 0x80u )
      {
        if ( v5 == 2 )
          *(_WORD *)v2 = 0;
        v2 += 2;
        v5 -= 2;
        v4 += 2;
      }
      else
      {
        if ( v5 == 1 )
          *v2 = 0;
        ++v2;
        --v5;
        ++v4;
      }
    }
    while ( v4 < result );
  }
  return result;
}
