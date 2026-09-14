// 函数 0x45f7f0  sub_45F7F0  size=0x27  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

DWORD sub_45F7F0()
{
  DWORD result; // eax

  result = GetTickCount() - dword_8D5D28;
  if ( result > 0xC8 )
    return sub_45F540(0, 0, 0, byte_4A2869);
  return result;
}
