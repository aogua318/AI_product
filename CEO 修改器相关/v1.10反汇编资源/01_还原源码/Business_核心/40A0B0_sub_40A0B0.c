// 函数 0x40a0b0  sub_40A0B0  size=0x9F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40A0B0(int a1, int a2)
{
  int v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  result = a2 >> 5;
  v4 = a1 >> 5;
  v6 = a2 >> 5;
  for ( i = 0; v2 < dword_4C43CC; ++v2 )
  {
    result = sub_464E90(v2);
    if ( result )
    {
      v5 = dword_4C43DC + v2 * dword_4C43C8;
      sub_40D7C0(&a2, &a1);
      a1 >>= 5;
      a2 >>= 5;
      if ( a2 == v4 && a1 == v6 )
        sub_486260(*(_DWORD *)(v5 + 80), 3, 19039);
      result = i + 1;
      i = result;
      if ( result >= dword_4C43D4 )
        break;
    }
  }
  return result;
}
