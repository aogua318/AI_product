// 函数 0x458010  sub_458010  size=0x54  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_458010(int a1, int a2)
{
  int v2; // edx
  int result; // eax

  if ( a2 >= 0 )
  {
    v2 = 5 * *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    dword_8C5A44 = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    sub_47FF50(*(_DWORD *)dword_8C59AC + 4 * v2);
    sub_47CCD0(&unk_8C7458);
    return sub_435570(1, 0);
  }
  return result;
}
