// 函数 0x4266f0  sub_4266F0  size=0x1F7  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_4266F0(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebx
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  __int16 v7; // ax
  int v8; // ecx
  int v9; // eax
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  __int16 *v13; // [esp+14h] [ebp-4h]
  __int16 *v14; // [esp+14h] [ebp-4h]

  v1 = dword_4D0C84 + a1 * dword_4D0C70;
  v2 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 2);
  v12 = v2;
  v11 = *(__int16 *)(v1 + 16);
  if ( sub_483C00(v11) || sub_483C30(v11) != a1 || !sub_464E10(a1) )
    return 0;
  sub_426610(a1);
  v3 = 0;
  if ( *(char *)(v1 + 22) > 0 )
  {
    v13 = (__int16 *)(v1 + 24);
    do
    {
      v4 = dword_4D10A8 + dword_4D1094 * *v13;
      if ( *(_BYTE *)(v4 + 12) == 2 || *(_BYTE *)(v4 + 13) == 2 )
        sub_42C3E0(0, 1);
      ++v13;
      *(_WORD *)(v4 + 26) = -1;
      ++v3;
    }
    while ( v3 < *(char *)(v1 + 22) );
    v2 = v12;
  }
  v5 = 0;
  if ( *(char *)(v1 + 23) > 0 )
  {
    v14 = (__int16 *)(v1 + 64);
    do
    {
      v6 = dword_4D10A8 + dword_4D1094 * *v14;
      if ( *(_BYTE *)(v6 + 12) == 2 || *(_BYTE *)(v6 + 13) == 2 )
        sub_42C3E0(0, 1);
      ++v14;
      *(_WORD *)(v6 + 26) = -1;
      ++v5;
    }
    while ( v5 < *(char *)(v1 + 23) );
    v2 = v12;
  }
  v7 = *(_WORD *)(v1 + 130);
  if ( v7 != -1 )
  {
    sub_415C20(
      dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v2 + 2 * *(unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v7) + 240),
      *(_DWORD *)(dword_4D0BAC + dword_4D0B98 * v7 + 20));
    sub_420B10(*(__int16 *)(v1 + 130));
  }
  sub_40CBE0((_DWORD *)v2, v11);
  sub_4864E0(v11);
  if ( dword_4B1198 == a1 )
  {
    sub_43C340(0);
    dword_4B1198 = -1;
    dword_4B1010 = -1;
  }
  v8 = *(__int16 *)(v1 + 4);
  v9 = *(__int16 *)(v1 + 6);
  if ( v8 == -1 )
    *(_WORD *)(v2 + 752) = v9;
  else
    *(_WORD *)(v8 * dword_4D0C70 + dword_4D0C84 + 6) = v9;
  if ( v9 != -1 )
    *(_WORD *)(v9 * dword_4D0C70 + dword_4D0C84 + 4) = v8;
  --*(_WORD *)(v2 + 740);
  return 1;
}
