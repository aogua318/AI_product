// 函数 0x47c640  sub_47C640  size=0x98  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_47C640(_DWORD *a1)
{
  int v1; // ecx
  int v2; // edi
  int v3; // edx
  __int16 *v4; // eax
  int v5; // esi

  if ( (int)a1[2] > 0 )
  {
    dword_8EEDAC = 0;
    dword_8EEDB0 = 0;
    dword_8EEDB4 = (int)a1;
    sub_47C5E0();
    sub_47C550();
    v1 = a1[2];
    v2 = 0;
    v3 = 0;
    dword_8EEB5C = (int)a1;
    dword_4B81E8 = 0;
    if ( v1 > 0 )
    {
      v4 = (__int16 *)(*a1 + 6);
      v5 = v1;
      do
      {
        if ( *(v4 - 1) > v2 )
          v2 = *(v4 - 1);
        if ( *v4 > v3 )
          v3 = *v4;
        v4 += 12;
        --v5;
      }
      while ( v5 );
    }
    sub_469880(dword_8EEDBC, v2, v3, dword_8EEDF8, 0);
    ShowCursor(0);
    sub_47C5E0();
  }
}
