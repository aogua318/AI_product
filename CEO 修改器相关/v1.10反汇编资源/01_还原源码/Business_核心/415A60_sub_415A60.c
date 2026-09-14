// 函数 0x415a60  sub_415A60  size=0x60  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __thiscall sub_415A60(__int16 *this)
{
  int result; // eax
  __int16 *v3; // esi
  __int16 v4; // ax

  for ( result = *(__int16 *)(dword_4CCA98 * *(this + 1) + dword_4CCAAC + 760); result != -1; result = v3[2] )
  {
    v3 = (__int16 *)(dword_870868 + result * dword_870854);
    if ( v3[4] == *(char *)this )
    {
      v4 = v3[6];
      if ( v4 != -1 )
      {
        sub_42BF60(v4);
        sub_43CAB0();
      }
    }
  }
  return result;
}
