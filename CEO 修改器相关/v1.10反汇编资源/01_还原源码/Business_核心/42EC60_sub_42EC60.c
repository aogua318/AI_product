// 函数 0x42ec60  sub_42EC60  size=0x54  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42EC60(__int16 *this)
{
  int v1; // edx
  int result; // eax
  __int16 *v3; // ecx

  v1 = *(this + 44);
  for ( result = 0; v1 != -1; v1 = v3[809] )
  {
    v3 = (__int16 *)(dword_4CCAAC + v1 * dword_4CCA98);
    result += v3[233] + v3[241] + v3[232];
  }
  return result;
}
