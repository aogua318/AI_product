// 函数 0x40c2e0  sub_40C2E0  size=0x110  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40C2E0(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  __int16 *v7; // esi
  int v8; // ecx
  signed int v9; // ecx
  int v11; // [esp+4h] [ebp-Ch] BYREF
  int v12; // [esp+8h] [ebp-8h] BYREF
  int v13; // [esp+Ch] [ebp-4h]
  int v14; // [esp+18h] [ebp+8h]
  int v15; // [esp+24h] [ebp+14h]

  v4 = dword_4CCAAC + a1 * dword_4CCA98;
  v5 = *(__int16 *)(v4 + 754);
  v14 = 1000;
  v6 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v4 + 2 * (a4 < 0 ? 0 : a4) + 240);
  v15 = v6;
  v13 = -1;
  if ( v5 == -1 )
    return -1;
  do
  {
    v7 = (__int16 *)(dword_4C4378 + v5 * dword_4C4364);
    if ( *((char *)v7 + 10) == *(unsigned __int8 *)(v6 + 1256) && v7[1] == -1 )
    {
      v8 = dword_4CCAAC + dword_4CCA98 * *v7;
      sub_483850(
        *(__int16 *)(v7[4] * *(_DWORD *)(v8 + 160) + *(_DWORD *)(v8 + 180) + 2),
        *(__int16 *)(v7[4] * *(_DWORD *)(v8 + 160) + *(_DWORD *)(v8 + 180) + 4),
        &v12,
        &v11);
      v9 = abs32(v11 - a3) + abs32(v12 - a2);
      if ( v9 < v14 )
      {
        v14 = v9;
        v13 = v5;
      }
      v6 = v15;
    }
    v5 = v7[3];
  }
  while ( v5 != -1 );
  return v13;
}
