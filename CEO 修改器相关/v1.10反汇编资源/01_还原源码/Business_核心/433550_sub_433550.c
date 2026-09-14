// 函数 0x433550  sub_433550  size=0x1B2  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_433550(int a1, int a2, int a3)
{
  int v3; // esi
  int *v4; // edi
  int *v5; // edx
  int result; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // esi
  int v10; // [esp+Ch] [ebp-8h]
  int *v11; // [esp+10h] [ebp-4h]

  v3 = dword_870840 + a1 * dword_87082C;
  v10 = v3;
  v4 = (int *)(*(_DWORD *)dword_4C5DF4
             + 9208 * ((a3 >> 5) * dword_4C5DEC + (a2 >> 5) < 0 ? 0 : (a3 >> 5) * dword_4C5DEC + (a2 >> 5)));
  sub_4123E0(v4, a1);
  v5 = dword_4B32D4;
  v11 = dword_4B32D4;
  do
  {
    result = (a3 + *v5) * dword_4D0E80 + a2 + *(v5 - 1) < 0 ? 0 : (a3 + *v5) * dword_4D0E80 + a2 + *(v5 - 1);
    v7 = *(_DWORD *)(dword_4D0EF4 + 4 * result);
    if ( v7 != -1 )
    {
      result = sub_483C00(*(_DWORD *)(dword_4D0EF4 + 4 * result));
      if ( !result )
      {
        result = sub_483C30(v7);
        v8 = dword_4C43DC + result * dword_4C43C8;
        if ( *(_BYTE *)(v8 + 3) == 3 )
        {
          sub_417B60(
            (char *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v8 + 16)),
            *(__int16 *)(v3 + 4),
            a1,
            dword_4CD11C);
          v9 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v3 + 4);
          LOWORD(result) = sub_417B60((char *)v9, *(__int16 *)(v8 + 16), a1, dword_4CD11C);
          *(double *)(v9 + 1792) = (double)v4[1498] + *(double *)(v9 + 1792);
          *(double *)(v9 + 1800) = (double)v4[1499] + *(double *)(v9 + 1800);
          *(double *)(v9 + 1808) = (double)v4[1500] + *(double *)(v9 + 1808);
          *(double *)(v9 + 1816) = (double)v4[1501] + *(double *)(v9 + 1816);
          *(double *)(v9 + 1824) = (double)v4[1502] + *(double *)(v9 + 1824);
          *(double *)(v9 + 1832) = (double)v4[1503] + *(double *)(v9 + 1832);
          *(double *)(v9 + 1840) = (double)v4[1504] + *(double *)(v9 + 1840);
          v3 = v10;
        }
      }
      v5 = v11;
    }
    v5 += 2;
    v11 = v5;
  }
  while ( (int)v5 < (int)dword_4B32F4 );
  return result;
}
