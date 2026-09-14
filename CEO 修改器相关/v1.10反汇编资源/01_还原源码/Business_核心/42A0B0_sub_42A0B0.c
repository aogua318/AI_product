// 函数 0x42a0b0  sub_42A0B0  size=0x31  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_42A0B0()
{
  int result; // eax

  result = *(_DWORD *)dword_4D0C8C;
  if ( *(_DWORD *)dword_4D0C8C )
  {
    result = sub_465FE0(dword_4D0C8C[0], (int)"machine_type.cpp", 208);
    *(_DWORD *)dword_4D0C8C = 0;
  }
  dword_4D0C90 = 0;
  return result;
}
