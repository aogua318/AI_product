// 函数 0x403260  sub_403260  size=0x11F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_403260(int a1)
{
  __int16 *v1; // ebx
  int v2; // esi
  __int16 *v3; // edi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  __int16 *i; // [esp+8h] [ebp-Ch]
  __int16 *v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v1 = (__int16 *)(dword_4CCAAC + a1 * dword_4CCA98);
  v2 = 0;
  v8 = v1;
  if ( v1[373] && v1[115] >= 2 )
  {
    v3 = v1 + 400;
    v9 = 0;
    for ( i = v1 + 400; ; ++i )
    {
      if ( !*v3 )
        goto LABEL_18;
      if ( sub_419BB0(v2) )
      {
        v4 = sub_432190(a1, v2);
        if ( v4 > sub_4640D0() % 10 + 3 )
        {
          sub_401310(a1, v2);
          goto LABEL_17;
        }
        goto LABEL_18;
      }
      if ( *v3 <= 1 )
        goto LABEL_18;
      if ( sub_432190(a1, v2) )
        goto LABEL_18;
      v5 = v1[379];
      if ( v5 == -1 )
        goto LABEL_18;
      while ( 1 )
      {
        v6 = v5 * dword_8703BC;
        if ( *(_WORD *)(v5 * dword_8703BC + dword_8703D0 + 28) == 0xFFFF )
          break;
LABEL_14:
        v5 = *(__int16 *)(v6 + dword_8703D0 + 4);
        if ( v5 == -1 )
          goto LABEL_18;
      }
      if ( *(char *)(v6 + dword_8703D0 + 31) != v2 )
        break;
      sub_4321D0(v5);
      v1 = v8;
LABEL_17:
      v9 = 1;
LABEL_18:
      ++v2;
      v3 = i + 1;
      if ( v2 >= 8 )
      {
        if ( v9 )
          sub_417880(v1);
        return;
      }
    }
    v1 = v8;
    goto LABEL_14;
  }
}
