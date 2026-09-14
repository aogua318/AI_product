// 函数 0x493c1b  __fileno  size=0x26  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl _fileno(FILE *Stream)
{
  if ( Stream )
    return Stream->_file;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}
