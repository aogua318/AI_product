// 函数 0x4011f0  sub_4011F0  size=0x34  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4011F0(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi

  v4 = abs32(a1 - a3);
  v5 = abs32(a2 - a4);
  if ( v4 < v5 )
    return v5 + (v4 >> 1);
  else
    return v4 + (v5 >> 1);
}
