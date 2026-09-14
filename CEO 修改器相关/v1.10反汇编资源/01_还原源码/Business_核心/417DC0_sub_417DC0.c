// 函数 0x417dc0  sub_417DC0  size=0x55  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_417DC0()
{
  __int16 *v0; // edi
  int v1; // esi
  int result; // eax

  v0 = word_4D1110;
  do
  {
    v1 = *v0;
    for ( *((_DWORD *)v0 - 8) = 0; v1 != -1; v1 = *(__int16 *)(v1 * dword_4CCA98 + dword_4CCAAC + 1618) )
    {
      sub_417C30(v1);
      result = v1 * dword_4CCA98;
    }
    v0 += 94940;
  }
  while ( (int)v0 < (int)&dbl_870370 );
  return result;
}
