// 函数 0x498472  _isxdigit  size=0x30  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl isxdigit(int C)
{
  if ( dword_8F386C )
    return _isxdigit_l(C, 0);
  else
    return off_4B8FE8[C] & 0x80;
}
