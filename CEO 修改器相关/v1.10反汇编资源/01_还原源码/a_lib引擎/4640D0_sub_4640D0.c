// 函数 0x4640d0  sub_4640D0  size=0x25  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_4640D0()
{
  int result; // eax

  ++dword_8DB7D0;
  result = 10973 * HIWORD(dword_4B3900) + ((unsigned __int16)dword_4B3900 << 14);
  dword_4B3900 = result;
  return result;
}
