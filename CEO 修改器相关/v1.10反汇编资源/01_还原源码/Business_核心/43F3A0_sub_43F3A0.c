// 函数 0x43f3a0  sub_43F3A0  size=0x4E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43F3A0(int a1, unsigned int a2)
{
  int result; // eax

  if ( a2 <= 7 )
  {
    if ( *(_DWORD *)(dword_8A5CE0 + 7540) >= (unsigned int)dword_8A48C4 )
      sub_4801E0(0);
    if ( dword_8A48CC != a2 )
    {
      dword_8A48CC = a2;
      sub_43F010();
    }
    return sub_4830A0(&unk_8A4900);
  }
  return result;
}
