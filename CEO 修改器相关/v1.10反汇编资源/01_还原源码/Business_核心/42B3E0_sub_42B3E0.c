// 函数 0x42b3e0  sub_42B3E0  size=0x78  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42B3E0(int a1, int a2)
{
  int result; // eax
  int v3; // eax

  result = dword_4CE050;
  if ( dword_4CE050 != -1 )
  {
    result = sub_4864E0(dword_4CE050);
    dword_4CE050 = -1;
  }
  if ( a1 >= 0 && a2 >= 0 )
  {
    v3 = sub_486480(138, a1, a2, 0, 20, 0, 0, 1, 0);
    dword_4CE050 = v3;
    if ( v3 != -1 )
      sub_483BD0(v3, 5, -1);
    return sub_485F80(a1, a2);
  }
  return result;
}
