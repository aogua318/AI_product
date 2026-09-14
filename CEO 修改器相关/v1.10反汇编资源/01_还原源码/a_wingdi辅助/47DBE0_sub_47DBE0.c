// 函数 0x47dbe0  sub_47DBE0  size=0x138  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_47DBE0(int a1, int a2)
{
  __int16 *v2; // ecx
  int v3; // eax
  int v4; // ecx
  __int16 *v5; // esi
  const RECT *v6; // eax
  const RECT *v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // esi
  void (__cdecl *v11)(_DWORD); // ecx

  if ( !dword_8EEDB8 )
  {
    v3 = dword_4B81E8;
    dword_8EEDB8 = 1;
    if ( dword_4B81E8 == -1 )
    {
      v5 = v2;
    }
    else
    {
      v4 = dword_8EED8C + *(__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8 + 2);
      v5 = (__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8);
      v6 = (const RECT *)sub_464D00(dword_8EED88 + *v5, v4, dword_8EED88 + *v5 + v5[2], v4 + v5[3]);
      InvalidateRect(hWnd, v6, 0);
      v3 = dword_4B81E8;
    }
    dword_8EED80 = dword_8EED88;
    dword_8EED84 = dword_8EED8C;
    dword_8EED88 = a1;
    dword_8EED8C = a2;
    if ( v3 != -1 )
    {
      v7 = (const RECT *)sub_464D00(a1 + *v5, a2 + v5[1], a1 + *v5 + v5[2], a2 + v5[1] + v5[3]);
      InvalidateRect(hWnd, v7, 0);
    }
    sub_47D450(0);
    (*(void (**)(void))(dword_8EEC68 + 4448))();
    v8 = dword_8EEC68;
    v9 = 0;
    if ( *(int *)(dword_8EEC68 + 4424) > 0 )
    {
      v10 = 0;
      do
      {
        v11 = *(void (__cdecl **)(_DWORD))(v10 + v8 + 40);
        if ( v11 )
        {
          v11(*(_DWORD *)(v10 + v8 + 24));
          v8 = dword_8EEC68;
        }
        ++v9;
        v10 += 44;
      }
      while ( v9 < *(_DWORD *)(v8 + 4424) );
    }
    dword_8EEDB8 = 0;
  }
}
