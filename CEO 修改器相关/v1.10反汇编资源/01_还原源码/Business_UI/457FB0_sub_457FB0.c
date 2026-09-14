// 函数 0x457fb0  sub_457FB0  size=0x59  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_457FB0(int a1, int a2)
{
  int v2; // edx
  int result; // eax

  if ( a2 >= 0 )
  {
    v2 = 9 * *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    dword_8C5A3C = *(_DWORD *)(*(_DWORD *)(a1 + 296) + 52);
    sub_47FF50(*(_DWORD *)dword_8C5970 + 4 * v2);
    sub_47CCD0(&unk_8C5CB8);
    sub_457D60();
    return sub_435570(1, 0);
  }
  return result;
}
