// 函数 0x47cf30  sub_47CF30  size=0x2B  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

_DWORD *sub_47CF30()
{
  int v0; // ecx
  _DWORD *result; // eax

  dword_4B81E4 = -1;
  v0 = 0;
  result = &unk_8EEF6C;
  while ( !*result )
  {
    result += 142;
    ++v0;
    if ( (int)result >= (int)dword_8F12EC )
      return result;
  }
  dword_4B81E4 = v0;
  return result;
}
