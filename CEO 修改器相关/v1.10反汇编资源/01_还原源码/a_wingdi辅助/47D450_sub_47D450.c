// 函数 0x47d450  sub_47D450  size=0x1C3  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_47D450(int a1)
{
  int v1; // ecx
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ebx
  void (__cdecl *v7)(int); // eax
  int i; // [esp+4h] [ebp-4h]

  v1 = dword_8EEC68;
  dword_8EED70 = 1;
  v2 = *(_DWORD *)(dword_8EEC68 + 4424) - 1;
  *(_DWORD *)(dword_8EEC68 + 4432) = -1;
  if ( v2 >= 0 )
  {
    v3 = 44 * v2;
    for ( i = 44 * v2; ; v3 = i )
    {
      v4 = (_DWORD *)(v3 + v1 + 24);
      if ( a1 == 1 && !dword_8EED90 )
        break;
      v5 = sub_483170(a1);
      v1 = dword_8EEC68;
      v6 = v5;
      if ( *(_DWORD *)(dword_8EEC68 + 4432) == -1 )
      {
        if ( !dword_8EED70 && a1 == 1 )
        {
          if ( *((_BYTE *)v4 + 33) && *(_WORD *)(*v4 + 300) == 0xFFFF )
          {
            dword_8F2A9C = *v4;
            dword_4B81F4 = v2;
            dword_8F2A98 = dword_8EED88;
            dword_8F2A94 = dword_8EED8C;
          }
          if ( *((_BYTE *)v4 + 32) && v2 != *(_DWORD *)(dword_8EEC68 + 4424) - 1 )
          {
            sub_47D050((_DWORD *)dword_8EEC68, v2);
            return;
          }
        }
        if ( GetAsyncKeyState(1) >= 0 )
          dword_4B81F4 = -1;
        if ( !a1 && dword_4B81F4 != -1 )
        {
          sub_482F10(
            dword_8EED88 + *(__int16 *)(dword_8F2A9C + 276) - dword_8F2A98,
            dword_8EED8C + *(__int16 *)(dword_8F2A9C + 278) - dword_8F2A94);
          dword_8F2A98 = dword_8EED88;
          v7 = *(void (__cdecl **)(int))(44 * (dword_4B81F4 + 1) + dword_8EEC68);
          dword_8F2A94 = dword_8EED8C;
          if ( v7 )
            v7(dword_8F2A9C);
          return;
        }
        if ( v6 != -1 && v4[3] )
        {
          *(_DWORD *)(dword_8EEC68 + 4428) = v2;
          ((void (__cdecl *)(_DWORD, int))v4[3])(*v4, v6);
        }
        v1 = dword_8EEC68;
        if ( !dword_8EED70 )
          *(_DWORD *)(dword_8EEC68 + 4432) = v2;
      }
      i -= 44;
      if ( --v2 < 0 )
        return;
    }
  }
}
