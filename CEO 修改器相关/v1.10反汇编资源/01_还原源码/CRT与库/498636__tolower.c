// 函数 0x498636  _tolower  size=0x2C  模块=CRT与库
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl tolower(int C)
{
  int result; // eax

  if ( dword_8F386C )
    return _tolower_l(C, 0);
  result = C;
  if ( (unsigned int)(C - 65) <= 0x19 )
    return C + 32;
  return result;
}
