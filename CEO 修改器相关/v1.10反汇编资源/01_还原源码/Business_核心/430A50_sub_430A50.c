// 函数 0x430a50  sub_430A50  size=0x45  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_430A50(int a1)
{
  int result; // eax

  result = dword_4B32B8;
  if ( dword_4B32B8 != -1 )
  {
    result = sub_4864E0(dword_4B32B8);
    dword_4B32B8 = -1;
    if ( a1 == dword_4B1028 )
      dword_4B1010 = -1;
  }
  return result;
}
