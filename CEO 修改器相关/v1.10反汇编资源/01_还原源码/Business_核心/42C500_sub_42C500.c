// 函数 0x42c500  sub_42C500  size=0x82  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_42C500(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v9; // [esp+14h] [ebp+8h]

  v4 = *(_DWORD *)(a1[34] + 4 * (a2 + a3 * a1[6]));
  if ( v4 == -1 )
    return 0;
  v5 = a1[40];
  v9 = a1[45];
  while ( 1 )
  {
    v6 = v9 + v4 * v5;
    if ( *(_BYTE *)(v6 + 11) == 1 )
    {
      v7 = dword_4D1094 * *(__int16 *)(v6 + 12);
      if ( (*(_BYTE *)(v7 + dword_4D10A8 + 11) & 0xF) == 2 && *(__int16 *)(v7 + dword_4D10A8 + 26) == a4 )
        break;
    }
    v4 = *(_DWORD *)(v6 + 20);
    if ( v4 == -1 )
      return 0;
  }
  return 1;
}
