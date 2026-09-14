// 函数 0x42f040  sub_42F040  size=0x5D  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_42F040(__int16 *this, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // ecx
  int v5; // edx

  v2 = *(this + 44);
  for ( result = 0; v2 != -1; v2 = *(__int16 *)(v4 + 1618) )
  {
    v4 = dword_4CCAAC + v2 * dword_4CCA98;
    v5 = *(__int16 *)(v4 + 2 * a2 + 240);
    if ( v5 != -1 )
      result += *(_DWORD *)(v5 * dword_4CC8BC + dword_4CC8D0 + 20);
  }
  return result;
}
