// 函数 0x422ad0  sub_422AD0  size=0x7F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_422AD0@<eax>(int a1@<eax>, int a2)
{
  signed int v2; // ecx
  unsigned int v3; // edi
  unsigned int v4; // eax
  int v5; // esi
  unsigned int v6; // edx
  signed int v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v2 = a1 + 2;
  v3 = a1 - 2;
  v9 = 0;
  v8 = a1 + 2;
  if ( !__OFSUB__(a1 - 2, a1 + 2) || a1 - 2 == a1 + 2 )
  {
    v4 = dword_4C5DEC;
    v5 = v3 * dword_4C5DEC;
    do
    {
      if ( v3 < dword_4C5DD8 )
      {
        v6 = a2 - 2;
        if ( !__OFSUB__(a2 - 2, a2 + 2) || a2 - 2 == a2 + 2 )
        {
          do
          {
            if ( v6 < v4 )
            {
              v9 += *(_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v5 + v6))
                  + *(_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v5 + v6) + 4)
                  + *(_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v5 + v6) + 8)
                  + *(_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v5 + v6) + 12);
              v4 = dword_4C5DEC;
            }
            ++v6;
          }
          while ( (int)v6 <= a2 + 2 );
          v2 = v8;
        }
      }
      ++v3;
      v5 += v4;
    }
    while ( (int)v3 <= v2 );
  }
  return v9;
}
