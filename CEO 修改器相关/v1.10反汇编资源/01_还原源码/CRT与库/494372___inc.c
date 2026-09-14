// 函数 0x494372  __inc  size=0x16  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __fastcall _inc(int a1, FILE *a2)
{
  if ( --a2->_cnt < 0 )
    return _filbuf(a2);
  return *(unsigned __int8 *)a2->_ptr++;
}
