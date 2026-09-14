// 函数 0x40d6a0  sub_40D6A0  size=0x11B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40D6A0(int a1, int a2, int a3)
{
  int v3; // esi
  unsigned int v4; // esi
  int v5; // edi
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // esi
  __int16 v9; // ax
  int v10; // ecx
  __int64 v11; // rax
  int v13; // [esp+0h] [ebp-8h]
  int v14; // [esp+4h] [ebp-4h]

  if ( (unsigned int)(a1 - 66) > 0x16 )
    return sub_4640D0() % 2;
  v14 = 1;
  v13 = 40;
  do
  {
    v3 = sub_4640D0() % 50;
    v4 = a2 + v3 - sub_4640D0() % 50;
    v5 = sub_4640D0() % 50;
    v6 = a3 + v5 - sub_4640D0() % 50;
    if ( v4 < dword_4D0E80 && v6 < dword_4D0E84 )
    {
      v7 = v4 + v6 * dword_4D0E80;
      v8 = *(_DWORD *)(dword_4D0EF4 + 4 * v7);
      if ( v8 != -1 && !sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * v7)) )
      {
        v9 = *(_WORD *)(dword_4C43DC + sub_483C30(v8) * dword_4C43C8);
        if ( v9 >= 66 && v9 <= 88 )
        {
          v10 = *(char *)(dword_4C443C + dword_4C4440 * (v9 - 66) + a1 - 66);
          v11 = *(char *)(dword_4C443C + dword_4C4440 * (v9 - 66) + a1 - 66);
          v14 += v10 * ((HIDWORD(v11) ^ v11) - HIDWORD(v11));
        }
      }
    }
    --v13;
  }
  while ( v13 );
  return v14;
}
