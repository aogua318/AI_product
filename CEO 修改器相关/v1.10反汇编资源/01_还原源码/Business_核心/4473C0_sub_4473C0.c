// 函数 0x4473c0  sub_4473C0  size=0x59  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4473C0(int a1, int a2)
{
  int result; // eax

  if ( a2 )
  {
    result = a2 - 2;
    if ( a2 == 2 )
    {
      sub_435570(1, 0);
      if ( (*(_BYTE *)(*(_DWORD *)(a1 + 296) + 585) & 2) != 0 )
        return sub_447F30(1);
      else
        return sub_447F30(0);
    }
  }
  else
  {
    sub_435570(1, 0);
    return sub_4181C0();
  }
  return result;
}
