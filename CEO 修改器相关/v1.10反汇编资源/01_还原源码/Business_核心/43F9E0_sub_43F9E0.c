// 函数 0x43f9e0  sub_43F9E0  size=0x36  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43F9E0(int a1)
{
  int result; // eax

  sub_47ECC0(a1);
  result = dword_8A5F50;
  if ( *(_DWORD *)(dword_8A5F50 + 2032) >= a1 )
    return sub_481500(a1 - 1);
  return result;
}
