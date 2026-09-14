// 函数 0x41f560  sub_41F560  size=0x103  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_41F560(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  int v5; // ecx
  unsigned int v6; // edx
  _DWORD *v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v16; // [esp+8h] [ebp-18h]
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+28h] [ebp+8h]
  unsigned int v22; // [esp+2Ch] [ebp+Ch]

  v2 = (a2 >> 5) - 1;
  v3 = 0;
  v4 = a1 >> 5;
  v19 = 0;
  v20 = 0;
  v21 = a1 >> 5;
  v18 = v2;
  v16 = (a2 >> 5) + 1;
  if ( v2 > v16 )
    return 20;
  v5 = v2 * dword_4C5DEC;
  v17 = v2 * dword_4C5DEC;
  do
  {
    if ( v2 < (unsigned int)dword_4C5DD8 )
    {
      v6 = v4 - 1;
      v22 = v4 - 1;
      if ( !__OFSUB__(v4 - 1, v4 + 1) || v4 - 1 == v4 + 1 )
      {
        do
        {
          if ( v6 < dword_4C5DEC )
          {
            v7 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v6 + v5));
            v8 = v7[1];
            v9 = v7[2];
            v10 = v7[3];
            v11 = v9 * v7[1492] + v8 * v7[1491] + *v7 * v7[1490];
            v12 = v19 + v10 * v7[1493];
            v13 = v8 + *v7;
            v2 = v18;
            v14 = v10 + v9 + v13;
            v6 = v22;
            v3 = v11 + v12;
            v20 += v14;
            v4 = v21;
            v5 = v17;
            v19 = v3;
          }
          v22 = ++v6;
        }
        while ( (int)v6 <= v4 + 1 );
      }
    }
    v5 += dword_4C5DEC;
    v18 = ++v2;
    v17 = v5;
  }
  while ( v2 <= v16 );
  if ( v20 )
    return v3 / v20;
  else
    return 20;
}
