// 函数 0x48d308  __setdefaultprecision  size=0x28  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

errno_t _setdefaultprecision()
{
  errno_t result; // eax

  result = _controlfp_s(0, 0x10000u, 0x30000u);
  if ( result )
    _invoke_watson(0, 0, 0, 0, 0);
  return result;
}
