// 函数 0x40dec0  sub_40DEC0  size=0x56  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40DEC0(int a1, int a2)
{
  __int16 *v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v2 = (__int16 *)(dword_4C43DC + a1 * dword_4C43C8);
  do
  {
    v3 = sub_40CD20(v2);
    if ( v3 == word_4C43E4[v4] )
      break;
    ++v4;
  }
  while ( v4 < 3 );
  v5 = a2 + 6 * v4;
  if ( dword_4CD128 >= 50 )
    return word_4C4410[v5];
  else
    return word_4C43EC[v5];
}
