// 函数 0x4984f3  _isspace  size=0x2E  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl isspace(int C)
{
  if ( dword_8F386C )
    return _isspace_l(C, 0);
  else
    return off_4B8FE8[C] & 8;
}
