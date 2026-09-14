// 函数 0x483de0  sub_483DE0  size=0x75  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __stdcall sub_483DE0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // esi
  signed int v6; // ecx
  signed int v7; // eax

  v4 = a4 - a2;
  v5 = a3 - a1;
  if ( a3 != a1 || v4 )
  {
    v6 = abs32(v4) + (sub_4640D0() & 1);
    v7 = abs32(v5);
    if ( v4 <= 0 )
    {
      if ( v6 > v7 )
        return 2;
    }
    else if ( v6 > v7 )
    {
      return 0;
    }
    if ( v5 > 0 )
      return 1;
    if ( v5 < 0 )
      return 3;
  }
  return -1;
}
