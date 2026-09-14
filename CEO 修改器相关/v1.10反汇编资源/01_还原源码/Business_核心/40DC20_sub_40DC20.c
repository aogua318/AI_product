// 函数 0x40dc20  sub_40DC20  size=0x7B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40DC20(int a1, int a2)
{
  int v2; // edx
  __int16 *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  v2 = *(_DWORD *)(a1 * dword_4C43C8 + dword_4C43DC + 80);
  v3 = (__int16 *)(dword_4D0F1C + v2 * dword_4D0F08);
  v4 = *v3;
  v5 = v3[3];
  v6 = *(unsigned __int8 *)(dword_4D0EFC + 10 * v4 + 7) >> 1;
  if ( a2 )
  {
    if ( v5 < v6 )
    {
      sub_4868E0(v2, v6 + v5);
      return 1;
    }
  }
  else if ( v5 >= v6 )
  {
    sub_4868E0(v2, v5 - v6);
    return 1;
  }
  return 0;
}
