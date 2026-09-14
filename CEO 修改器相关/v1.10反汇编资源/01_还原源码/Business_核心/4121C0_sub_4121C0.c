// 函数 0x4121c0  sub_4121C0  size=0x19C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_4121C0(int a1)
{
  __int16 *v1; // ecx
  __int16 v2; // ax
  __int16 v3; // ax
  signed int v4; // edx
  _WORD *v5; // esi
  int v6; // esi
  int v7; // edi
  size_t v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v14; // [esp+Ch] [ebp-14h] BYREF
  int v15; // [esp+10h] [ebp-10h] BYREF
  int v16; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h] BYREF
  __int16 *v18; // [esp+1Ch] [ebp-4h]
  unsigned __int8 *v19; // [esp+28h] [ebp+8h]

  v1 = (__int16 *)(dword_870868 + a1 * dword_870854);
  v2 = v1[5];
  v18 = v1;
  if ( v2 == -1 )
    return 0;
  v19 = (unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v2);
  if ( *v19 != dword_4C5DE8 )
    return 0;
  v3 = v1[6];
  if ( v3 == -1 || *(_BYTE *)(dword_4D1094 * v3 + dword_4D10A8 + 12) != 4 )
    return 0;
  v4 = 0;
  if ( (int)dword_4C5DF0 > 0 )
  {
    v5 = (_WORD *)dword_4C5DDC;
    do
    {
      if ( *v5 == *v1 )
        break;
      ++v4;
      v5 += 12;
    }
    while ( v4 < (int)dword_4C5DF0 );
  }
  if ( v4 != dword_4C5DF0 )
    return 0;
  v6 = dword_4CCAAC + dword_4CCA98 * *v1;
  v7 = dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v6 + 2 * dword_4C5DE8 + 240);
  v8 = dword_4C5DDC + 24 * dword_4C5DF0;
  *(_WORD *)v8 = *v1;
  *(_DWORD *)(v8 + 4) = *((_DWORD *)v19 + 5);
  *(_WORD *)(v8 + 12) = (char)v19[2];
  *(_WORD *)(v8 + 14) = sub_434650();
  v9 = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v8 + 8) = v9;
  if ( v9 < 1 )
    *(_DWORD *)(v8 + 8) = 1;
  v10 = v18[3] * *(_DWORD *)(v6 + 160) + *(_DWORD *)(v6 + 180);
  sub_483850(*(__int16 *)(v10 + 2), *(__int16 *)(v10 + 4), &v16, &v17);
  sub_4198B0(v16, v17, &v15, &v14);
  v11 = abs32(dword_4C5DE4 - v15);
  v12 = abs32(dword_4C5DE0 - v14);
  if ( v11 < v12 )
    v11 >>= 1;
  else
    v12 >>= 1;
  *(_WORD *)(v8 + 2) = v11 + v12;
  return ++dword_4C5DF0 == 2048;
}
