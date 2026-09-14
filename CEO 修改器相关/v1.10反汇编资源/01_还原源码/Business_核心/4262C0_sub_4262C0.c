// 函数 0x4262c0  sub_4262C0  size=0x2E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4262C0()
{
  int result; // eax

  result = *(_DWORD *)dword_4D0C60;
  if ( *(_DWORD *)dword_4D0C60 )
  {
    result = sub_465FE0(dword_4D0C60[0], (int)"loadstage.cpp", 124);
    *(_DWORD *)dword_4D0C60 = 0;
  }
  dword_4D0C64 = 0;
  return result;
}
