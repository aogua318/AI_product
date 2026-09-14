// 函数 0x47dd20  sub_47DD20  size=0x2B0  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47DD20(int a1, char a2)
{
  int (*v2)(void); // edx
  int v3; // esi
  void (*v4)(void); // eax
  int v6; // eax
  int v7; // eax
  DWORD TickCount; // edi
  int *v9; // eax
  bool v10; // zf
  unsigned int v11; // eax
  int v12; // esi
  void (__cdecl *v13)(_DWORD); // edx
  unsigned int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // esi
  struct tagMSG Msg; // [esp+4h] [ebp-2Ch] BYREF
  struct tagPOINT Point; // [esp+20h] [ebp-10h] BYREF
  int v20; // [esp+28h] [ebp-8h]
  int v21; // [esp+2Ch] [ebp-4h]
  int v22; // [esp+38h] [ebp+8h]

  v2 = *(int (**)(void))(a1 + 4);
  v3 = dword_8EEC68;
  dword_8F2AB4 = 0;
  dword_8EED9C = -1;
  v21 = dword_8EEC68;
  dword_8EEC68 = a1;
  v20 = *(_DWORD *)dword_8EED98;
  if ( v2() )
  {
    v6 = dword_8EEC68;
    *(_BYTE *)dword_8EEC68 = 1;
    *(_BYTE *)(v6 + 1) = a2;
    sub_47C950(0);
    v7 = dword_8EEC68;
    while ( *(_BYTE *)v7 )
    {
      if ( PeekMessageA(&Msg, 0, 0, 0, 1u) )
      {
        TranslateMessage(&Msg);
        DispatchMessageA(&Msg);
        v7 = dword_8EEC68;
      }
      else
      {
        TickCount = GetTickCount();
        sub_47C6E0();
        (*(void (**)(void))(dword_8EEC68 + 4436))();
        if ( dword_8F2AC8 && TickCount - dword_8F2AB0 > 0x12C )
        {
          dword_8F2ACC ^= 1u;
          dword_8F2AB0 = TickCount;
          v9 = (int *)sub_47F9F0(dword_8F2AC8);
          sub_47C950(v9);
        }
        if ( dword_8F2AD0 && TickCount - dword_8F2AAC > 0x64 )
        {
          v10 = *(_WORD *)(dword_8F2AD0 + 4) == 4;
          dword_8F2AAC = TickCount;
          if ( v10 )
          {
            if ( (*(_BYTE *)(dword_8F2AD0 + 8) & 8) != 0 )
              sub_481940(*(_DWORD *)(dword_8F2AD0 + 16) - 1);
            else
              sub_481940(*(_DWORD *)(dword_8F2AD0 + 16) + 1);
          }
          else if ( (*(_BYTE *)(dword_8F2AD0 + 8) & 8) != 0 )
          {
            sub_481500(*(_DWORD *)(dword_8F2AD0 + 16) - 1);
          }
          else
          {
            sub_481500(*(_DWORD *)(dword_8F2AD0 + 16) + 1);
          }
          *(_BYTE *)(dword_8F2AD0 + 7) = 1;
          sub_47D450(6);
        }
        GetCursorPos(&Point);
        ScreenToClient(hWnd, &Point);
        if ( Point.x != dword_8EED88 || Point.y != dword_8EED8C )
          sub_47DBE0(Point.x, Point.y);
        v11 = dword_4B81F0;
        if ( (unsigned int)dword_4B81F0 > 0x64 )
        {
          v11 = 100;
          dword_4B81F0 = 100;
        }
        if ( TickCount - dword_8F2AA8 > v11 )
        {
          dword_8F2AA8 = TickCount;
          sub_47CB10(0);
        }
        v7 = dword_8EEC68;
        v22 = 0;
        if ( *(int *)(dword_8EEC68 + 4424) > 0 )
        {
          v12 = 0;
          do
          {
            v13 = *(void (__cdecl **)(_DWORD))(v12 + v7 + 52);
            if ( v13 )
            {
              v14 = *(_DWORD *)(v12 + v7 + 60);
              if ( v14 != -1 && TickCount - *(_DWORD *)(v12 + v7 + 64) > v14 )
              {
                *(_DWORD *)(v12 + v7 + 64) = TickCount;
                v13(*(_DWORD *)(v12 + v7 + 24));
                v7 = dword_8EEC68;
              }
            }
            v12 += 44;
            ++v22;
          }
          while ( v22 < *(_DWORD *)(v7 + 4424) );
          v3 = v21;
        }
      }
    }
    (*(void (**)(void))(v7 + 8))();
    v15 = 0;
    v16 = v3;
    dword_8EEC68 = v3;
    if ( *(int *)(v3 + 4424) > 0 )
    {
      v17 = 0;
      do
      {
        *(_WORD *)(*(_DWORD *)(v17 + v16 + 24) + 300) = -1;
        dword_8EED70 = 1;
        sub_483170(0);
        v16 = dword_8EEC68;
        ++v15;
        v17 += 44;
      }
      while ( v15 < *(_DWORD *)(dword_8EEC68 + 4424) );
    }
    *(_DWORD *)dword_8EED98 = v20;
    sub_47C950(0);
    return dword_8EED9C;
  }
  else
  {
    v4 = *(void (**)(void))(v3 + 8);
    dword_8EEC68 = v3;
    v4();
    return -1;
  }
}
