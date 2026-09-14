// 函数 0x438c20  sub_438C20  size=0x17B  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_438C20(__int16 a1)
{
  int v1; // ebx
  int v2; // esi
  int v3; // edi
  char v4; // al
  int v5; // ecx
  int i; // eax
  int v7; // esi
  int v8; // edi
  __int16 *v9; // ebx
  int v11; // [esp+10h] [ebp-8h]

  v1 = a1;
  v2 = dword_89E57C + dword_89E568 * a1;
  v3 = *(_DWORD *)(v2 + 20);
  v11 = v3;
  if ( sub_483C00(v3) != 1 || sub_483C30(v3) != a1 )
    return 0;
  if ( !*(_BYTE *)(v2 + 18) )
    sub_438E20(*(__int16 *)(v2 + 6), *(unsigned __int8 *)(v2 + 16), *(unsigned __int8 *)(v2 + 17));
  v4 = *(_BYTE *)(v2 + 19) & 0xF;
  if ( v4 == 2 )
  {
    v5 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v2 + 4);
  }
  else
  {
    if ( v4 != 3 )
      goto LABEL_18;
    v5 = dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v2 + 6);
  }
  if ( v5 )
  {
    for ( i = *(__int16 *)(v5 + 758); i != -1; i = *(__int16 *)(v7 + 4) )
    {
      v7 = dword_8703D0 + i * dword_8703BC;
      if ( *(_WORD *)(v7 + 28) == a1 )
      {
        v8 = 3;
        v9 = (__int16 *)(v7 + 14);
        do
        {
          if ( *v9 != -1 )
            sub_421BD0(dword_4D0BAC + dword_4D0B98 * *v9);
          --v9;
          --v8;
        }
        while ( v8 >= 0 );
        sub_4864E0(*(__int16 *)(v7 + 24));
        sub_4864E0(*(__int16 *)(v7 + 26));
        v3 = v11;
        v1 = a1;
        *(_WORD *)(v7 + 24) = -1;
        *(_WORD *)(v7 + 26) = -1;
        *(_WORD *)(v7 + 28) = -1;
        *(_BYTE *)(v7 + 30) = 0;
      }
    }
  }
LABEL_18:
  if ( sub_464E10(v1) )
  {
    sub_4864E0(v3);
    return 1;
  }
  return 0;
}
