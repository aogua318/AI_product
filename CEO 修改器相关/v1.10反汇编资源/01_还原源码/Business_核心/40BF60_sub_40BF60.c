// 函数 0x40bf60  sub_40BF60  size=0x1BE  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_40BF60(int a1)
{
  __int16 *v1; // esi
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  __int16 v7; // ax
  int v8; // eax
  _BYTE v10[4]; // [esp+Ch] [ebp-10h] BYREF
  _BYTE v11[4]; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]

  v1 = (__int16 *)(dword_4C4378 + a1 * dword_4C4364);
  v2 = v1[4];
  v3 = dword_4CCAAC + dword_4CCA98 * *v1;
  v13 = v2;
  if ( sub_483C00(v2) != 3 )
    return 0;
  if ( sub_483C30(v2) != a1 )
    return 0;
  v12 = *((char *)v1 + 10);
  if ( !sub_464E10(a1) )
    return 0;
  v4 = dword_4CCAAC + dword_4CCA98 * *v1;
  sub_483850(
    *(__int16 *)(v1[4] * *(_DWORD *)(v4 + 160) + *(_DWORD *)(v4 + 180) + 2),
    *(__int16 *)(v1[4] * *(_DWORD *)(v4 + 160) + *(_DWORD *)(v4 + 180) + 4),
    v10,
    v11);
  sub_4864E0(v13);
  if ( a1 == dword_4B101C )
  {
    sub_43AEE0(0);
    dword_4B101C = -1;
    dword_4B1010 = -1;
  }
  v5 = v1[2];
  v6 = v1[3];
  if ( v5 == -1 )
    *(_WORD *)(v3 + 754) = v6;
  else
    *(_WORD *)(v5 * dword_4C4364 + dword_4C4378 + 6) = v6;
  if ( v6 != -1 )
    *(_WORD *)(v6 * dword_4C4364 + dword_4C4378 + 4) = v5;
  --*(_WORD *)(v3 + 742);
  --*(_WORD *)(v3 + 2 * v12 + 768);
  v7 = v1[1];
  if ( v7 != -1 )
  {
    v8 = dword_4D0BAC + dword_4D0B98 * v7;
    if ( *(_BYTE *)(v8 + 11) == 3 && *(__int16 *)(v8 + 14) == a1 )
    {
      *(_BYTE *)(v8 + 11) = -1;
      return 1;
    }
    if ( *(_BYTE *)(v8 + 10) == 3 && *(__int16 *)(v8 + 12) == a1 )
    {
      sub_415C20(*(_DWORD *)(v8 + 20));
      sub_420B10(v1[1]);
    }
  }
  return 1;
}
