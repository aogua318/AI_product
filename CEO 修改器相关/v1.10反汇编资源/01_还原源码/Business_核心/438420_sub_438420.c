// 函数 0x438420  sub_438420  size=0x18F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_438420(unsigned int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // esi
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // esi
  unsigned int v14; // [esp+4h] [ebp-8h]
  int v15; // [esp+8h] [ebp-4h]

  v4 = a2;
  if ( a2 >= dword_4D0E84 )
    return 0;
  v6 = a1;
  if ( a1 >= dword_4D0E80 )
    return 0;
  v7 = a1 + a2 * dword_4D0E80;
  if ( *(_DWORD *)(dword_4D0EF4 + 4 * v7) != -1 )
    return 0;
  if ( *(__int16 *)(dword_4D0EE4 + 2 * v7) > 0 )
    return 0;
  v8 = (unsigned __int16)word_870870[*(__int16 *)(dword_4D0EE0 + 2 * v7)];
  if ( v8 == dword_8709EC || v8 == dword_87091C )
    return 0;
  v9 = a2 - 1;
  v15 = 0;
  v14 = a2 - 1;
  if ( !__OFSUB__(a2 - 1, a2 + 1) || a2 - 1 == a2 + 1 )
  {
    v10 = v9 * dword_4D0E80;
    do
    {
      if ( v9 < dword_4D0E84 )
      {
        v11 = a1 - 1;
        if ( !__OFSUB__(a1 - 1, a1 + 1) || a1 - 1 == a1 + 1 )
        {
          do
          {
            if ( v11 < dword_4D0E80 )
            {
              v12 = *(_DWORD *)(dword_4D0EF0 + 4 * (v10 + v11));
              if ( *(_DWORD *)(dword_4D0EF4 + 4 * (v10 + v11)) == -1 )
              {
                if ( *(__int16 *)(dword_4D0EE4 + 2 * (v10 + v11)) <= 0 )
                {
                  for ( ; v12 != -1; v12 = *(_DWORD *)(v12 * dword_4D0F08 + dword_4D0F1C + 20) )
                  {
                    if ( *(_BYTE *)(v12 * dword_4D0F08 + dword_4D0F1C + 11) == 3 )
                      ++v15;
                  }
                }
                else
                {
                  ++v15;
                }
              }
              else
              {
                ++v15;
              }
            }
            ++v11;
          }
          while ( (int)v11 <= (int)(a1 + 1) );
          v9 = v14;
          v4 = a2;
        }
      }
      v10 += dword_4D0E80;
      v14 = ++v9;
    }
    while ( (int)v9 <= (int)(v4 + 1) );
    if ( v15 > 1 )
      return 0;
    v6 = a1;
  }
  v13 = sub_486480(a3, v6, v4, 0, 0, 0, 0, 0, 0);
  if ( v13 != -1 )
  {
    sub_4868E0(v13, a4);
    sub_483BD0(v13, 3, -1);
    return 1;
  }
  return 0;
}
