// 函数 0x402d10  sub_402D10  size=0x1BE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_402D10(int a1)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  __int16 *i; // edx
  int v6; // eax
  int v7; // esi
  char v8; // al
  int *v9; // eax
  double v10; // st7
  int v11; // kr00_4
  signed int v12; // eax
  double v13; // st7
  int v15; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch] BYREF
  int v17; // [esp+10h] [ebp-8h] BYREF
  int v18; // [esp+14h] [ebp-4h] BYREF
  int v19; // [esp+20h] [ebp+8h]

  v2 = dword_4CCAAC + dword_4B1000 * dword_4CCA98;
  v3 = dword_4CCAAC + a1 * dword_4CCA98;
  if ( !dword_4D0B68 || *(char *)(v3 + 224) >= 7 )
  {
    v4 = 0;
    for ( i = (__int16 *)(v2 + 488); *i != a1; i += 4 )
    {
      if ( ++v4 >= 32 )
      {
        v6 = *(__int16 *)(v3 + 2 * dword_4B1004 + 240);
        if ( v6 != -1 )
        {
          v7 = dword_4CC8D0 + v6 * dword_4CC8BC;
          v8 = *(_BYTE *)(v7 + 10);
          if ( !v8 || *(_BYTE *)(v3 + 224) == *(_BYTE *)(v2 + 224) && v8 != 2 )
          {
            sub_419920(&v18, &v16);
            sub_419920(&v17, &v15);
            v9 = (int *)((char *)dword_870824 + 112 * dword_4B1004);
            v10 = (double)*v9 * 0.00390625 * (double)*(int *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v9 + 7) + 24);
            if ( *(_BYTE *)(*(_DWORD *)dword_870814 + 72 * *((__int16 *)v9 + 7) + 13) )
              v10 = v10 * 0.8;
            v11 = *(_DWORD *)(v7 + 12);
            v19 = 400;
            v12 = 40 * (abs32(v16 - v15) + abs32(v18 - v17));
            if ( v12 >= 400 )
              v19 = v12;
            v15 = *(__int16 *)(v7 + 30) != *(__int16 *)(v7 + 28)
                                         - (*(char *)(v3 + 224) == dword_8703A0)
                                         - *(__int16 *)(v7 + 32)
                ? 20
                : 10;
            v13 = (v10 + v10) * 100.0 / (v10 + (double)(v11 / 4) + (double)v19) * (double)v15;
            if ( dbl_4B9908 < v13 )
            {
              dbl_4B9908 = v13;
              dword_4B1008 = a1;
              return 0;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}
