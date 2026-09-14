// 函数 0x4095b0  sub_4095B0  size=0x2E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4095B0()
{
  int v0; // ecx
  int result; // eax

  sub_426AE0(dword_4B1028);
  sub_40C2B0();
  sub_413DB0();
  sub_434400(v0);
  sub_430A50(dword_4B1028);
  result = dword_4B32A4;
  if ( dword_4B32A4 != -1 )
  {
    result = sub_4864E0(dword_4B32A4);
    dword_4B32A4 = -1;
    dword_4B1010 = -1;
  }
  return result;
}
