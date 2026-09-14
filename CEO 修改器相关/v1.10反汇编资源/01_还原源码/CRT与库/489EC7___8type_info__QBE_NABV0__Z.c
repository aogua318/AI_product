// 函数 0x489ec7  ??8type_info@@QBE_NABV0@@Z  size=0x20  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __thiscall type_info::operator==(const char *this, int a2)
{
  return strcmp((const char *)(a2 + 9), this + 9) == 0;
}
