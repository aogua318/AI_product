// 函数 0x4580d0  sub_4580D0  size=0x5B  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4580D0(int a1, int a2)
{
  int result; // eax

  if ( !a2 )
  {
    dword_8C5A50 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    sub_47FF50(*(_DWORD *)dword_4D0C94 + 68 * (dword_8C5A50 + 3));
    sub_47CCD0(&unk_8C6190);
    return sub_435570(1, 0);
  }
  return result;
}
