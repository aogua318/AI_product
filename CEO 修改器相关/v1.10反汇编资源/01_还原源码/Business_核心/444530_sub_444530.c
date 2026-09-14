// 函数 0x444530  sub_444530  size=0x79  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_444530(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // edi

  result = *(__int16 *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 1618);
  if ( result == -1 )
    result = word_4D1110[94940 * *(char *)(dword_4B1028 * dword_4CCA98 + dword_4CCAAC + 224)];
  if ( a1 )
  {
    do
    {
      v2 = result * dword_4CCA98;
      v3 = result;
      result = *(__int16 *)(result * dword_4CCA98 + dword_4CCAAC + 1618);
      if ( result == -1 )
        result = word_4D1110[94940 * *(char *)(v2 + dword_4CCAAC + 224)];
    }
    while ( result != dword_4B1028 );
    return v3;
  }
  return result;
}
