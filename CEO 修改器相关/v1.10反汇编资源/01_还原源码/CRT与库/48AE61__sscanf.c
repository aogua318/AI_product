// 函数 0x48ae61  _sscanf  size=0x22  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  return vscan_fn(Buffer, (int (__cdecl *)(_DWORD *, int, int, int))_input_l, (int)Format, 0, (int)va);
}
