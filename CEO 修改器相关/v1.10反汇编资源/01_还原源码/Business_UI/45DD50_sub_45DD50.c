// 函数 0x45dd50  sub_45DD50  size=0xAC  模块=Business_UI
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_45DD50(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st7
  double v9[4]; // [esp+0h] [ebp-1F64h]
  double v10[1000]; // [esp+20h] [ebp-1F44h] BYREF

  v5 = 0;
  if ( a3 >= 4 )
  {
    v6 = a4 + 8;
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
    while ( v5 < a3 - 3 );
  }
  for ( ; v5 < a3; v9[v5 + 3] = v8 )
    v8 = (double)*(int *)(a4 + 4 * v5++);
  sub_45D9F0(a1, SHIDWORD(a1), a2, a3, v10, a5);
}
