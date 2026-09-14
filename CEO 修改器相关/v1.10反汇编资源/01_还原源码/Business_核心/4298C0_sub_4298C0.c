// 函数 0x4298c0  sub_4298C0  size=0x2E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4298C0()
{
  int result; // eax

  result = *(_DWORD *)dword_4D0C94;
  if ( *(_DWORD *)dword_4D0C94 )
  {
    result = sub_465FE0(dword_4D0C94[0], (int)"machine_type.cpp", 70);
    *(_DWORD *)dword_4D0C94 = 0;
  }
  dword_4D0C90 = 0;
  return result;
}
