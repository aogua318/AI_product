// 函数 0x457f40  sub_457F40  size=0x63  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_457F40(int a1, int a2)
{
  int v2; // edx
  int result; // eax

  if ( a2 >= 0 )
  {
    v2 = 5 * *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    dword_8C5A38 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    sub_47FF50(*(_DWORD *)dword_8C5974 + 4 * v2);
    sub_457F10(dword_8C5A38);
    sub_47CCD0(&unk_8C5F30);
    return sub_435570(1, 0);
  }
  return result;
}
