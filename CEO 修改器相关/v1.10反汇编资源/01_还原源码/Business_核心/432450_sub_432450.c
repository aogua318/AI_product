// 函数 0x432450  sub_432450  size=0x24  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_432450(__int16 *a1, __int16 *a2)
{
  int v2; // ecx
  int v3; // eax

  v2 = a1[3];
  v3 = a2[3];
  if ( v3 >= v2 )
    return -(v2 != v3);
  else
    return 1;
}
