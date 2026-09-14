// 函数 0x48ff8a  _write_char  size=0x33  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall write_char@<eax>(FILE *File@<ecx>, int result@<eax>, _DWORD *a3@<esi>)
{
  bool v3; // sf

  if ( ((File->_flag & 0x40) == 0 || File->_base)
    && ((v3 = File->_cnt - 1 < 0, --File->_cnt, v3)
      ? (result = _flsbuf((char)result, File))
      : (*File->_ptr = result, ++File->_ptr, result = (unsigned __int8)result),
        result == -1) )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
  }
  return result;
}
