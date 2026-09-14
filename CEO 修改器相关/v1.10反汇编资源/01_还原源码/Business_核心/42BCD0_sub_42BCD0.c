// 函数 0x42bcd0  sub_42BCD0  size=0x7F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42BCD0(int a1, unsigned int a2, unsigned int a3)
{
  __int16 *v3; // esi
  int v4; // ebx
  int v6; // edi
  int *v7; // esi

  v3 = (__int16 *)(dword_4D10A8 + a1 * dword_4D1094);
  v4 = v3[7];
  if ( !sub_42BC50(v4, a2, a3) )
    return 0;
  if ( *v3 != a2 || v3[1] != a3 )
  {
    v6 = 0;
    v7 = dword_4B32D0;
    while ( 1 )
    {
      v6 += sub_42BC50(v4, a2 + *v7, a3 + v7[1]);
      if ( v6 > 1 )
        break;
      v7 += 2;
      if ( (int)v7 >= (int)&dword_4B32F0 )
        return 0;
    }
  }
  return 1;
}
