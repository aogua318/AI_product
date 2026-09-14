// 函数 0x43a160  sub_43A160  size=0xBA  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_43A160(int a1)
{
  int v1; // esi
  int v2; // eax
  _WORD *v3; // ecx
  int v4; // ecx
  int v5; // edi
  __int16 *v6; // esi

  v1 = dword_89E57C + a1 * dword_89E568;
  if ( !*(_BYTE *)(v1 + 18) && *(__int16 *)(v1 + 6) == dword_89E554 )
  {
    if ( (*(_BYTE *)(v1 + 19) & 0xF) != 0 )
    {
      v2 = (*(_BYTE *)(v1 + 19) & 0xF) - 2;
      if ( (*(_BYTE *)(v1 + 19) & 0xF) == 2 )
      {
        v3 = (_WORD *)(v1 + 8);
        do
        {
          if ( *v3 == 0xFFFF )
            break;
          ++v2;
          ++v3;
        }
        while ( v2 < 4 );
        v4 = *(unsigned __int8 *)(v1 + 17);
        if ( v2 < v4 )
          sub_439000(dword_89E57C + a1 * dword_89E568, v4 - v2);
      }
    }
    else
    {
      sub_419C10(
        (__int16 *)(dword_4CCAAC + dword_4CCA98 * *(__int16 *)(v1 + 4)),
        *(unsigned __int8 *)(v1 + 16),
        -*(unsigned __int8 *)(v1 + 17));
    }
    v5 = 3;
    v6 = (__int16 *)(v1 + 14);
    do
    {
      if ( *v6 != -1 )
        sub_420B10(*v6);
      --v6;
      --v5;
    }
    while ( v5 >= 0 );
    sub_438C20(a1);
  }
  return 0;
}
