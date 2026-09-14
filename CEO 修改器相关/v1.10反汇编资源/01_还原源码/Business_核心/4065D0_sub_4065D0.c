// 函数 0x4065d0  sub_4065D0  size=0x1B8  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __usercall sub_4065D0@<eax>(int a1@<eax>, int a2)
{
  double v2; // st6
  int result; // eax
  double v4; // st5
  int v5; // edi
  int v6; // esi
  unsigned int v7; // ebx
  int v8; // ecx
  double v9; // st5
  int v10; // ebx
  int v11; // edi
  int v12; // ecx
  double v13; // st5
  int v14; // ecx
  int v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-8h]
  int v17; // [esp+4h] [ebp-8h]
  int v18; // [esp+8h] [ebp-4h]

  v2 = 0.0;
  result = word_4D1110[94940 * a1];
  v15 = -1;
  v18 = result;
  if ( result != -1 )
  {
    while ( 1 )
    {
      v4 = 0.0;
      v5 = byte_4CE046;
      v6 = dword_4CCAAC + v18 * dword_4CCA98;
      v7 = byte_4CE046 - 25;
      v16 = 24;
      do
      {
        v8 = v5;
        if ( v5 > 24 )
          v8 = v5 - 8 * (3 * (v7 / 0x18) + 3);
        if ( v8 < 0 )
          v8 += 24 * ((-1 - v8) / 0x18u) + 24;
        v4 = v4 + (double)*(int *)(v6 + 4 * v8 + 1512);
        --v5;
        --v7;
        --v16;
      }
      while ( v16 );
      if ( v4 >= 0.0 )
        goto LABEL_23;
      v9 = 0.0;
      v10 = byte_4CE046;
      v11 = byte_4CE046 - 1;
      v17 = 23;
      do
      {
        v12 = v10;
        if ( v10 > 24 )
          v12 = v10 - 8 * (3 * ((v11 - 24) / 0x18u) + 3);
        if ( v12 < 0 )
          v12 += 24 * ((-1 - v12) / 0x18u) + 24;
        v13 = v9 + (double)*(int *)(v6 + 4 * v12 + 1512);
        v14 = v11;
        if ( v11 > 24 )
          v14 = v11 - 8 * (3 * ((v11 - 25) / 0x18u) + 3);
        if ( v14 < 0 )
          v14 += 24 * ((-1 - v14) / 0x18u) + 24;
        v9 = v13 - (double)*(int *)(v6 + 4 * v14 + 1512);
        --v10;
        --v11;
        --v17;
      }
      while ( v17 );
      if ( v9 < v2 )
      {
        if ( ++*(_DWORD *)(v6 + 2112) > a2 )
        {
          v2 = v9;
          v15 = v18;
        }
        goto LABEL_24;
      }
      if ( v9 > 0.0 )
LABEL_23:
        *(_DWORD *)(v6 + 2112) = 0;
LABEL_24:
      v18 = *(__int16 *)(v6 + 1618);
      if ( v18 == -1 )
      {
        result = v15;
        if ( v15 != -1 )
          return sub_41A9F0(v15);
        return result;
      }
    }
  }
  return result;
}
