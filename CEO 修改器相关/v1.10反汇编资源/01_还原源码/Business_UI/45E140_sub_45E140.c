// 函数 0x45e140  sub_45E140  size=0xB1  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45E140(int *a1, int a2, int a3, __int64 a4, double a5)
{
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st7
  double v9[4]; // [esp+0h] [ebp-1F64h]
  int v10[2000]; // [esp+20h] [ebp-1F44h] BYREF

  v5 = 0;
  if ( a2 >= 4 )
  {
    v6 = a3 + 8;
    do
    {
      v7 = (double)*(int *)(v6 - 8);
      v5 += 4;
      v6 += 16;
      v9[v5] = v7;
      v9[v5 + 1] = (double)*(int *)(v6 - 20);
      v9[v5 + 2] = (double)*(int *)(v6 - 16);
      v9[v5 + 3] = (double)*(int *)(v6 - 12);
    }
    while ( v5 < a2 - 3 );
  }
  for ( ; v5 < a2; v9[v5 + 3] = v8 )
    v8 = (double)*(int *)(a3 + 4 * v5++);
  sub_45DE00(a1, a2, (int)v10, a4, SHIDWORD(a4), a5);
}
