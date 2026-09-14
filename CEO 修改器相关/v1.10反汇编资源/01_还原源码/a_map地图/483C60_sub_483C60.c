// 函数 0x483c60  sub_483C60  size=0x77  模块=a_map地图
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int *__stdcall sub_483C60(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // eax

  v5 = (a3 - 1) / -2;
  v6 = (a4 - 1) / -2;
  v7 = v5 + a3 - 1;
  v8 = v6 + a4 - 1;
  v9 = a5;
  if ( a5 > 0 )
  {
    do
    {
      v10 = v6 ^ v5;
      v11 = v8 ^ v7;
      v12 = v10 ^ v6;
      v13 = v11 ^ v8;
      v5 = v12 ^ v10;
      v7 = v13 ^ v11;
      v6 = -v12;
      v8 = -v13;
      --v9;
    }
    while ( v9 );
  }
  if ( v5 > v7 )
  {
    v14 = v7 ^ v5;
    v7 ^= v14;
    v5 = v7 ^ v14;
  }
  if ( v6 > v8 )
  {
    v15 = v8 ^ v6;
    v8 ^= v15;
    v6 = v8 ^ v15;
  }
  return sub_464D00(a1 + v5, a2 + v6, a1 + v7, a2 + v8);
}
