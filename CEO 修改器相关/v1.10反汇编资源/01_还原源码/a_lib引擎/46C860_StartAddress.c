// 函数 0x46c860  StartAddress  size=0x330  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl __noreturn StartAddress(char *a1)
{
  DWORD TickCount; // edi
  int v2; // eax
  int v3; // eax
  int v4; // edi
  char *v5; // ebx
  signed int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char *v15; // [esp-14h] [ebp-28030h]
  int v16; // [esp+Ch] [ebp-28010h]
  int v17; // [esp+10h] [ebp-2800Ch] BYREF
  int v18; // [esp+14h] [ebp-28008h] BYREF
  char Src[163840]; // [esp+18h] [ebp-28004h] BYREF

  if ( *((int *)a1 + 7) < 0 )
  {
    TickCount = GetTickCount();
    v2 = (int)(*((_DWORD *)a1 + 1) * (GetTickCount() - TickCount + *((_DWORD *)a1 + 7))) / 8;
    *((_DWORD *)a1 + 3) = v2;
    if ( v2 < 0 )
    {
      do
      {
        Sleep(1u);
        v3 = (int)(*((_DWORD *)a1 + 1) * (GetTickCount() - TickCount + *((_DWORD *)a1 + 7))) / 8;
        *((_DWORD *)a1 + 3) = v3;
      }
      while ( v3 < 0 );
    }
  }
  v4 = 0;
  v16 = 0;
  *((_DWORD *)a1 + 3) = 0;
  memset(Src, 0, sizeof(Src));
  (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 182210) + 52))(*(_DWORD *)(a1 + 182210), 0);
  memset(Src, 0, sizeof(Src));
  sub_46C790(163840, (int)a1, 0, Src);
  if ( *((_DWORD *)a1 + 4) )
  {
    v5 = a1 + 163888;
    do
    {
      sub_474E90(v5);
      sub_46A2E0((FILE **)a1 + 8, 0);
      if ( *((_DWORD *)a1 + 4) )
      {
        while ( 1 )
        {
          v6 = sub_46A320((FILE **)a1 + 8, a1 + 40, 0x28000u);
          if ( v6 <= 0 )
            break;
          v15 = a1 + 40;
          if ( 8 * *((_DWORD *)a1 + 3) < *((_DWORD *)a1 + 1) * *((_DWORD *)a1 + 7) )
            v7 = sub_475230(v5, v15, v6, Src, 81920, &v18);
          else
            v7 = sub_475080(v5, v15, v6, Src, 81920, &v18);
          if ( !v7 )
          {
            do
            {
              v8 = *((_DWORD *)a1 + 1) * *((_DWORD *)a1 + 7);
              *((_DWORD *)a1 + 3) += *((_DWORD *)a1 + 40998);
              if ( 8 * *((_DWORD *)a1 + 3) < v8 )
              {
                v13 = sub_475230(v5, 0, 0, Src, 81920, &v18);
              }
              else
              {
                v9 = v18;
                if ( v18 )
                {
                  while ( *((_DWORD *)a1 + 4) )
                  {
                    Sleep(1u);
                    v10 = (*(int (__stdcall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(a1 + 182210) + 16))(
                            *(_DWORD *)(a1 + 182210),
                            &v17,
                            0) == 0;
                    v9 = v18;
                    if ( v10 )
                    {
                      v11 = v17 - v4;
                      if ( v17 - v4 <= 0 )
                        v11 += 163840;
                      if ( v11 > v18 )
                        break;
                    }
                  }
                  sub_46C790(v9, (int)a1, v4, Src);
                  v4 += v18;
                  if ( v4 > 163840 )
                    v4 -= 163840;
                  if ( !v16 )
                  {
                    v12 = *(_DWORD *)(a1 + 182210);
                    *((_DWORD *)a1 + 4) = 2;
                    v16 = 1;
                    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v12 + 48))(v12, 0, 0, 1);
                    (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 182210) + 52))(
                      *(_DWORD *)(a1 + 182210),
                      0);
                    *((_DWORD *)a1 + 7) = 0;
                  }
                }
                v5 = a1 + 163888;
                v13 = sub_475080(a1 + 163888, 0, 0, Src, 81920, &v18);
              }
            }
            while ( !v13 );
          }
          if ( !*((_DWORD *)a1 + 4) )
            goto LABEL_35;
        }
        while ( *((_DWORD *)a1 + 4) )
        {
          Sleep(1u);
          if ( !(*(int (__stdcall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(a1 + 182210) + 16))(
                  *(_DWORD *)(a1 + 182210),
                  &v17,
                  0) )
          {
            v14 = v17 - v4;
            if ( v17 - v4 <= 0 )
              v14 += 163840;
            if ( v14 > 81920 )
              break;
          }
        }
      }
LABEL_35:
      v5 = a1 + 163888;
      sub_474EF0(a1 + 163888);
      if ( !*((_DWORD *)a1 + 5) )
      {
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 182210) + 72))(*(_DWORD *)(a1 + 182210));
        if ( !*((_DWORD *)a1 + 4) )
          break;
        *((_DWORD *)a1 + 4) = 0;
      }
    }
    while ( *((_DWORD *)a1 + 4) );
  }
  *(_DWORD *)(a1 + 182214) = 0;
  sub_46D780();
}
