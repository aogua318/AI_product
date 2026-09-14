// 函数 0x422820  sub_422820  size=0x215  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int sub_422820()
{
  int v0; // edi
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int result; // eax
  int v6; // esi
  _DWORD *v7; // esi
  int v8; // ebx
  long double v9; // st7
  double v10; // st4
  int v11; // [esp+8h] [ebp-4h]

  v0 = 0;
  v1 = 0;
  dword_4D048C = 0;
  dword_4D0490 = 0;
  dword_4D0494 = 0;
  dword_4D0480 = 0;
  dword_4D0484 = 0;
  dword_4D0488 = 0;
  if ( dword_4C5DD8 > 0 )
  {
    v2 = dword_4C5DEC;
    do
    {
      v3 = 0;
      if ( v2 > 0 )
      {
        do
        {
          v4 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v3 + v1 * v2));
          ++v3;
          v4[1515] = 0;
          v4[1516] = 0;
          v4[1517] = 0;
          v4[1512] = 0;
          v4[1513] = 0;
          v4[1514] = 0;
          v4[1518] = 0;
          v2 = dword_4C5DEC;
        }
        while ( v3 < dword_4C5DEC );
      }
      ++v1;
    }
    while ( v1 < dword_4C5DD8 );
  }
  result = sub_464ED0(sub_422730);
  v11 = 0;
  if ( dword_4C5DD8 > 0 )
  {
    v6 = dword_4C5DEC;
    do
    {
      if ( v6 > 0 )
      {
        do
        {
          v7 = (_DWORD *)(*(_DWORD *)dword_4C5DF4 + 9208 * (v0 + v11 * v6));
          v8 = v7[4];
          v9 = (pow((double)(*v7 + v7[1]), 0.5) + 10.0) * 5.0;
          v10 = (double)(v7[1516] + 100);
          v7[1519] = (int)(((double)(v7[1515] + 100) + 500.0)
                         * 1200.0
                         / ((double)(v8 + 35000) * v9 / 70000.0 + 500.0)
                         * (double)(dword_4D047C + 1)
                         * 0.25);
          v7[1520] = (int)((v10 + 500.0)
                         * 800.0
                         / ((double)(v8 + 75000) * v9 / 50000.0 + 500.0)
                         * (double)(dword_4D047C + 1)
                         * 0.25);
          v7[1521] = (int)(0.25
                         * (((double)(2 * (5 * v7[1518] + 50)) + 500.0)
                          * 1000.0
                          / (v9 + 500.0)
                          * (double)(dword_4D047C + 1)));
          v6 = dword_4C5DEC;
          ++v0;
        }
        while ( v0 < dword_4C5DEC );
        v0 = 0;
      }
      result = v11 + 1;
      v11 = result;
    }
    while ( result < dword_4C5DD8 );
  }
  return result;
}
