// 函数 0x415b20  sub_415B20  size=0x4E  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415B20(__int16 *this)
{
  int v1; // edx
  int result; // eax

  v1 = *(__int16 *)(dword_4CCA98 * *(this + 1) + dword_4CCAAC + 760);
  for ( result = 0; v1 != -1; v1 = *(__int16 *)(v1 * dword_870854 + dword_870868 + 4) )
  {
    if ( *(_WORD *)(v1 * dword_870854 + dword_870868 + 8) == *(char *)this )
      ++result;
  }
  return result;
}
