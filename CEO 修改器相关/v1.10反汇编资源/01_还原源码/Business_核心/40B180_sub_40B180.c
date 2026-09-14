// 函数 0x40b180  sub_40B180  size=0x8F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __usercall sub_40B180@<eax>(unsigned int result@<eax>)
{
  int v1; // edx
  unsigned int v2; // edi
  bool v3; // cf
  __int16 v4; // cx

  v1 = 0;
  v2 = 0;
  for ( dword_4D045C = 0; (int)v2 < dword_4D0E84; v1 += dword_4D0E80 )
  {
    result = 0;
    if ( dword_4D0E80 > 0 )
    {
      v3 = dword_4D0E80 != 0;
      do
      {
        if ( v3 && v2 < dword_4D0E84 )
          v4 = *(_WORD *)(dword_4D0EE0 + 2 * (v1 + result));
        else
          v4 = -1;
        if ( (unsigned __int16)word_870870[v4] == dword_870918
          && result < dword_4D0E80
          && v2 < dword_4D0E84
          && !*(_WORD *)(dword_4D0EE4 + 2 * (v1 + result)) )
        {
          ++dword_4D045C;
        }
        v3 = ++result < dword_4D0E80;
      }
      while ( (int)result < dword_4D0E80 );
    }
    ++v2;
  }
  return result;
}
