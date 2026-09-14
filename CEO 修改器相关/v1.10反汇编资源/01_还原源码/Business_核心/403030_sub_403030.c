// 函数 0x403030  sub_403030  size=0x227  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_403030(int a1)
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // edi
  int result; // eax
  int v7; // ebx
  double v8; // st6
  int v9; // esi
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  int j; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int i; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h] BYREF
  int v24; // [esp+24h] [ebp-4h] BYREF

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  v2 = 0;
  v3 = *(__int16 *)(v1 + 238);
  for ( i = 0; v3 != -1; v3 = *(__int16 *)(v4 + 6) )
  {
    v4 = dword_4CC8D0 + v3 * dword_4CC8BC;
    if ( *(_BYTE *)(v4 + 9) != 2 )
      ++v2;
    if ( sub_415A00(dword_4CC8D0 + v3 * dword_4CC8BC) )
      ++i;
  }
  v20 = v2 != 0;
  v5 = v20 + (i != 0);
  *(_DWORD *)(v1 + 460) = sub_41BB90(v5);
  result = *(__int16 *)(v1 + 480);
  *(_WORD *)(v1 + 476) = v5;
  for ( j = 0; result != -1; ++j )
  {
    v7 = dword_870840 + result * dword_87082C;
    v22 = v7;
    if ( j >= v20 )
    {
      v8 = 0.0;
      v9 = sub_402FB0(a1);
      if ( v9 != -1 )
      {
        v10 = 0;
        v23 = 0;
        if ( dword_4C5DD8 > 0 )
        {
          do
          {
            v11 = 0;
            v24 = 0;
            if ( dword_4C5DEC > 0 )
            {
              do
              {
                v12 = *(_DWORD *)dword_4C5DF4 + 9208 * (v10 * dword_4C5DEC + v11);
                if ( v8 < *(double *)(v12 + 8 * v9 + 24) )
                {
                  v18 = v11;
                  v8 = *(double *)(v12 + 8 * v9 + 24);
                  v17 = v10;
                }
                v24 = ++v11;
              }
              while ( v11 < dword_4C5DEC );
              v7 = v22;
            }
            v23 = ++v10;
          }
          while ( v10 < dword_4C5DD8 );
          if ( v8 != 0.0 )
          {
            v13 = sub_4640D0() % 32;
            v14 = sub_4640D0() % 16;
            v15 = sub_4640D0() % 32;
            v16 = sub_4640D0() % 16;
            v24 = v13 + 32 * v18 - v14;
            v23 = v15 + 32 * v17 - v16;
            sub_433DE0(v24, v23);
            v7 = v22;
          }
        }
      }
    }
    else
    {
      result = sub_402ED0(a1);
      if ( result == -1 )
        return result;
      sub_419920(&v24, &v23);
      sub_433DE0(v24, v23);
    }
    result = *(__int16 *)(v7 + 10);
  }
  return result;
}
