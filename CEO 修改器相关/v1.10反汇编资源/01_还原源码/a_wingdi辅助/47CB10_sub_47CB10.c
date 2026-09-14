// 函数 0x47cb10  sub_47CB10  size=0x132  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_47CB10(int a1)
{
  int v1; // esi
  RECT *v2; // edi
  int v3; // eax
  int i; // ebx
  void (__cdecl *v5)(_DWORD, RECT *); // ecx
  void (__cdecl *v6)(_DWORD, RECT *); // ecx
  int v7; // [esp+4h] [ebp-4h]

  v1 = 0;
  v7 = 0;
  if ( dword_8EEDA8 > 0 )
  {
    v2 = &Rect;
    do
    {
      sub_4689C0(&dword_8EEDEC, v2);
      if ( *(_DWORD *)dword_8EED98 != -1 )
        sub_468D20(&dword_8EEDEC, v2->left, v2->top, v2->right - v2->left, v2->bottom - v2->top, dword_8EED98[0]);
      (*(void (__cdecl **)(RECT *))(dword_8EEC68 + 4440))(v2);
      v3 = dword_8EEC68;
      for ( i = 0; i < *(_DWORD *)(v3 + 4424); v1 += 44 )
      {
        *(_DWORD *)(v3 + 4428) = i;
        v5 = *(void (__cdecl **)(_DWORD, RECT *))(v1 + v3 + 28);
        if ( v5 )
          v5(*(_DWORD *)(v1 + v3 + 24), v2);
        sub_482D40(&dword_8EEDEC, hdcSrc);
        v3 = dword_8EEC68;
        v6 = *(void (__cdecl **)(_DWORD, RECT *))(v1 + dword_8EEC68 + 32);
        if ( v6 )
        {
          v6(*(_DWORD *)(v1 + dword_8EEC68 + 24), v2);
          v3 = dword_8EEC68;
        }
        ++i;
      }
      (*(void (__cdecl **)(RECT *))(v3 + 4444))(v2);
      v1 = 0;
      if ( a1 )
        sub_47C800(v2->left, v2->top, (__int16 *)(v2->right - v2->left), v2->bottom - v2->top);
      else
        InvalidateRect(hWnd, v2, 0);
      ++v2;
      ++v7;
    }
    while ( v7 < dword_8EEDA8 );
  }
  dword_8EEDA8 = 0;
}
