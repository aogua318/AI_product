// 函数 0x48bcb6  _feof  size=0x28  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl feof(FILE *Stream)
{
  if ( Stream )
    return Stream->_flag & 0x10;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}
