// 函数 0x492b9b  ?what@exception@@UBEPBDXZ  size=0xD  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

const char *__thiscall exception::what(exception *this)
{
  const char *result; // eax

  result = (const char *)*((_DWORD *)this + 1);
  if ( !result )
    return "Unknown exception";
  return result;
}
