// 函数 0x4916c1  __FF_MSGBANNER  size=0x39  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_BYTE *_FF_MSGBANNER()
{
  _BYTE *result; // eax

  if ( _set_error_mode(3) == 1 || (result = (_BYTE *)_set_error_mode(3)) == 0 && dword_4B82F8 == 1 )
  {
    _NMSG_WRITE(252);
    return _NMSG_WRITE(255);
  }
  return result;
}
