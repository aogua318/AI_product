// 函数 0x4385b0  sub_4385B0  size=0xA6  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

unsigned int __cdecl sub_4385B0(unsigned int a1, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edx
  signed int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // esi
  unsigned int v10; // [esp+Ch] [ebp+Ch]

  result = a2;
  if ( a2 < dword_4D0E84 )
  {
    v3 = dword_4D0E80;
    v4 = a1;
    if ( a1 < dword_4D0E80 )
    {
      v5 = a2 + 1;
      v6 = a2 - 1;
      v10 = a2 + 1;
      if ( !__OFSUB__(result - 1, result + 1) || result - 1 == result + 1 )
      {
        do
        {
          if ( v6 < dword_4D0E84 )
          {
            v7 = v4 - 1;
            result = v4 + 1;
            if ( !__OFSUB__(v4 - 1, v4 + 1) || v4 - 1 == v4 + 1 )
            {
              do
              {
                if ( v7 < v3 )
                {
                  v8 = *(_DWORD *)(dword_4D0EF0 + 4 * (v7 + v6 * v3));
                  if ( v8 != -1 )
                  {
                    do
                    {
                      v9 = dword_4D0F1C + v8 * dword_4D0F08;
                      if ( *(_BYTE *)(v9 + 11) == 3 )
                        sub_4864E0(v8);
                      v8 = *(_DWORD *)(v9 + 20);
                    }
                    while ( v8 != -1 );
                    v3 = dword_4D0E80;
                    v4 = a1;
                  }
                }
                ++v7;
                result = v4 + 1;
              }
              while ( (int)v7 <= (int)(v4 + 1) );
              v5 = v10;
            }
          }
          ++v6;
        }
        while ( (int)v6 <= v5 );
      }
    }
  }
  return result;
}
