// 函数 0x434090  sub_434090  size=0x17C  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_434090(int a1)
{
  int v1; // ebx
  __int16 *v2; // esi
  int v3; // edi
  __int16 v4; // ax
  __int16 v5; // ax
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v10; // [esp+Ch] [ebp-4h]

  v1 = a1;
  v2 = (__int16 *)(dword_870868 + a1 * dword_870854);
  v3 = dword_4CCAAC + dword_4CCA98 * *v2;
  v10 = v2[3];
  if ( sub_483C00(v10) != 7 || sub_483C30(v10) != a1 || !sub_464E10(a1) )
    return 0;
  sub_434070(a1);
  v4 = v2[5];
  if ( v4 != -1 )
  {
    sub_415C20(
      dword_4CC8D0 + dword_4CC8BC * *(__int16 *)(v3 + 2 * *(unsigned __int8 *)(dword_4D0BAC + dword_4D0B98 * v4) + 240),
      *(_DWORD *)(dword_4D0BAC + dword_4D0B98 * v4 + 20));
    sub_420B10(v2[5]);
  }
  v5 = v2[6];
  if ( v5 != -1 )
  {
    v6 = dword_4D10A8 + dword_4D1094 * v5;
    if ( *(_BYTE *)(v6 + 12) == 4 || *(_BYTE *)(v6 + 13) == 4 )
      sub_42C3E0(v6, 0, 1);
    *(_WORD *)(v6 + 30) = -1;
    v1 = a1;
  }
  sub_4864E0(v10);
  if ( v1 == dword_4B32BC )
  {
    sub_43D660(0);
    dword_4B32BC = -1;
    dword_4B1010 = -1;
  }
  v7 = v2[1];
  v8 = v2[2];
  if ( v7 == -1 )
    *(_WORD *)(v3 + 760) = v8;
  else
    *(_WORD *)(v7 * dword_870854 + dword_870868 + 4) = v8;
  if ( v8 != -1 )
    *(_WORD *)(v8 * dword_870854 + dword_870868 + 2) = v7;
  --*(_WORD *)(v3 + 748);
  return 1;
}
