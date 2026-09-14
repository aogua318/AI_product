// 函数 0x40b140  sub_40B140  size=0x3A  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40B140(int a1, int a2)
{
  int result; // eax

  result = sub_47E410(*(_DWORD *)(a1 + 296) + 9792);
  if ( !result )
    return sub_481500(*(_DWORD *)(*(_DWORD *)(a1 + 296) + 10096) - a2);
  return result;
}
