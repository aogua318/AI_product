// 函数 0x419df0  sub_419DF0  size=0x112  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_419DF0(int a1)
{
  int v1; // ecx
  char v2; // al
  int v3; // eax
  int v4; // esi
  int i; // eax
  int v6; // esi
  __int16 v7; // ax
  int v8; // eax
  int v9; // edi
  int v10; // esi
  int v12; // [esp+8h] [ebp+8h]

  v1 = dword_4CCAAC + a1 * dword_4CCA98;
  v12 = v1;
  if ( !dword_4CD13C || *(char *)(v1 + 224) >= 7 )
  {
    v2 = *(_BYTE *)(v1 + 225);
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        v3 = *(__int16 *)(v1 + 752);
        if ( v3 != -1 )
        {
          do
          {
            v4 = dword_4D0C84 + v3 * dword_4D0C70;
            sub_427A30(v4);
            v3 = *(__int16 *)(v4 + 6);
          }
          while ( v3 != -1 );
          v1 = v12;
        }
        for ( i = *(__int16 *)(v1 + 760); i != -1; i = *(__int16 *)(v6 + 4) )
        {
          v6 = dword_870868 + i * dword_870854;
          v7 = *(_WORD *)(v6 + 12);
          if ( v7 != -1 )
          {
            sub_42BF60(v7);
            v1 = v12;
          }
        }
        *(_BYTE *)(v1 + 225) = 2;
      }
      v8 = *(__int16 *)(v1 + 764);
      v9 = 0;
      if ( v8 == -1 )
        goto LABEL_19;
      do
      {
        v10 = dword_4D10A8 + v8 * dword_4D1094;
        if ( *(_BYTE *)(v10 + 12) == 3 )
        {
          v9 = 1;
        }
        else
        {
          sub_42BF60(v8);
          v1 = v12;
        }
        v8 = *(__int16 *)(v10 + 6);
      }
      while ( v8 != -1 );
      if ( !v9 )
LABEL_19:
        *(_BYTE *)(v1 + 225) = 0;
    }
  }
  return 0;
}
