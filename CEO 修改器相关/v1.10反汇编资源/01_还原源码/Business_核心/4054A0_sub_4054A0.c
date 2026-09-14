// 函数 0x4054a0  sub_4054A0  size=0x98  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4054A0(int a1, int a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  char *v5; // esi
  int v6; // eax
  int v8; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = *(__int16 *)(a1 * dword_4CCA98 + dword_4CCAAC + 238);
  v3 = 0;
  v4 = 0;
  v8 = 0;
  for ( i = 0; v2 != -1; v2 = *((__int16 *)v5 + 3) )
  {
    v5 = (char *)(dword_4CC8D0 + v2 * dword_4CC8BC);
    if ( v5[9] != 2 || v5[10] != 2 || sub_415A00(dword_4CC8D0 + v2 * dword_4CC8BC) )
    {
      v6 = word_4C70C0[106 * *v5 + a2];
      if ( v6 <= 0 )
      {
        if ( v6 < 0 )
        {
          v4 += v6;
          ++i;
        }
      }
      else
      {
        v3 += v6;
        ++v8;
      }
    }
  }
  return v8 * v3 + 100 * i * v4;
}
