// 函数 0x4753f0  sub_4753F0  size=0x5C  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void sub_4753F0(char *Format, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  memset(byte_8DBEA8, 0, 0xFFu);
  _vsnprintf(byte_8DBEA8, 0xFFu, Format, va);
  strcat(byte_8DBEA8, "\n\r");
  OutputDebugStringA(byte_8DBEA8);
}
