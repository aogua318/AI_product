// 函数 0x439c80  sub_439C80  size=0x233  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_439C80(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // edx
  double v4; // st6
  __int16 v5; // ax
  int v6; // ebx
  int v7; // eax
  double v8; // st7
  __int16 v9; // ax
  int v10; // eax
  __int16 v11; // ax
  int v12; // eax
  __int16 v13; // ax
  int v14; // eax
  double v15; // st7
  int v16; // ebx
  __int16 v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+10h] [ebp-8h] BYREF
  int v20; // [esp+14h] [ebp-4h] BYREF
  __int16 v21; // [esp+20h] [ebp+8h]

  v1 = dword_89E57C + a1 * dword_89E568;
  if ( (*(_BYTE *)(v1 + 19) & 0xF) == 0 )
  {
    if ( sub_439260(a1) && sub_419A80(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 4), a1) )
      *(_BYTE *)(v1 + 19) = *(_BYTE *)(v1 + 19) & 0xF0 | 2;
    return 0;
  }
  if ( (*(_BYTE *)(v1 + 19) & 0xF) != 1 || !sub_439260(a1) )
    return 0;
  if ( *(_BYTE *)(v1 + 18) )
  {
    v2 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 6);
    if ( sub_419A80(v2, a1) )
    {
      v3 = *(unsigned __int8 *)(v1 + 16);
      v4 = 0.0;
      *(_BYTE *)(v1 + 19) = *(_BYTE *)(v1 + 19) & 0xF0 | 3;
      *(_DWORD *)(v1 + 24) = dword_4CD11C;
      v5 = *(_WORD *)(v1 + 8);
      v6 = 0;
      if ( v5 == -1 )
      {
        v8 = 0.00390625;
      }
      else
      {
        v7 = dword_4D0B98 * v5;
        v6 = *(_DWORD *)(v7 + dword_4D0BAC + 20);
        v4 = (double)*(int *)(v7 + dword_4D0BAC + 16) * 0.00390625 + 0.0;
        v8 = 0.00390625;
      }
      v9 = *(_WORD *)(v1 + 10);
      if ( v9 != -1 )
      {
        v10 = dword_4D0B98 * v9;
        v6 += *(_DWORD *)(v10 + dword_4D0BAC + 20);
        v4 = v4 + (double)*(int *)(v10 + dword_4D0BAC + 16) * v8;
      }
      v11 = *(_WORD *)(v1 + 12);
      if ( v11 != -1 )
      {
        v12 = dword_4D0B98 * v11;
        v6 += *(_DWORD *)(v12 + dword_4D0BAC + 20);
        v4 = v4 + (double)*(int *)(v12 + dword_4D0BAC + 16) * v8;
      }
      v13 = *(_WORD *)(v1 + 14);
      if ( v13 == -1 )
      {
        v15 = v4;
      }
      else
      {
        v14 = dword_4D0B98 * v13;
        v6 += *(_DWORD *)(v14 + dword_4D0BAC + 20);
        v15 = v8 * (double)*(int *)(v14 + dword_4D0BAC + 16) + v4;
      }
      sub_415260(
        (char *)(dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v2 + 2 * v3 + 240)),
        v6,
        (int)v15,
        1,
        0,
        *(char *)(dword_4CCA98 * *(__int16 *)(v1 + 4) + dword_4CCAAC + 224));
      sub_419920((_DWORD *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 4)), &v19, &v20);
      v16 = *(unsigned __int8 *)(v1 + 17);
      v18 = v20;
      v21 = v19;
      memcpy_0((void *)(v2 + 1632), (const void *)(v2 + 1624), 0x48u);
      *(_WORD *)(v2 + 1626) = v18;
      *(_DWORD *)(v2 + 1628) = v16;
      *(_WORD *)(v2 + 1624) = v21;
      return 0;
    }
    return 0;
  }
  if ( !sub_40E280(dword_4C43DC + dword_4C43C8 * *(__int16 *)(v1 + 6), a1) )
    return 0;
  if ( *(__int16 *)(v1 + 6) == dword_4B1024 )
    sub_446880();
  sub_438C20(a1);
  return 0;
}
