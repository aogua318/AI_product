// 函数 0x413db0  sub_413DB0  size=0x2B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_413DB0()
{
  int result; // eax

  result = dword_4B1104;
  if ( dword_4B1104 != -1 )
  {
    result = sub_4864E0(dword_4B1104);
    dword_4B1104 = -1;
    dword_4B1010 = -1;
  }
  return result;
}
