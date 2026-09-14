// 函数 0x47d620  sub_47D620  size=0x56E  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LRESULT __stdcall sub_47D620(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  WPARAM v4; // ebx
  UINT v5; // edi
  HDC v6; // edi
  __int16 *v7; // esi
  LRESULT result; // eax
  int v9; // ecx
  int *v10; // eax
  int *v11; // eax
  int v12; // edx
  DWORD v13; // ecx
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  void (__cdecl *v17)(_DWORD, int); // eax
  DWORD TickCount; // eax
  struct tagPAINTSTRUCT Paint; // [esp+14h] [ebp-44h] BYREF

  v4 = wParam;
  v5 = Msg;
  if ( Msg > 0x100 )
  {
    if ( Msg > 0x201 )
    {
      switch ( Msg )
      {
        case 0x202u:
          dword_8EED90 = 0;
          sub_47D450(2);
          if ( (int *)dword_8EEB5C != &dword_8EEE1C )
            sub_47C640(&dword_8EEE1C);
          (*(void (**)(void))(dword_8EEC68 + 4468))();
          if ( !dword_8F2AA0 )
            break;
          if ( (int)(abs32(dword_4B81F8 - dword_8EED8C) + abs32(dword_4B81FC - dword_8EED88)) >= 4 )
            goto LABEL_66;
          TickCount = GetTickCount();
          if ( (int)(TickCount - dword_8F2AA4) > 500 )
            goto LABEL_66;
          dword_8F2AA4 = TickCount;
          if ( ++dword_8F2AA0 == 4 )
          {
            (*(void (**)(void))(dword_8EEC68 + 4480))();
LABEL_66:
            dword_8F2AA0 = 0;
          }
          break;
        case 0x204u:
          dword_8EED94 = 1;
          sub_47D450(3);
          (*(void (**)(void))(dword_8EEC68 + 4472))();
          break;
        case 0x205u:
          dword_8EED94 = 0;
          sub_47D450(4);
          (*(void (**)(void))(dword_8EEC68 + 4476))();
          break;
        case 0x20Au:
          v14 = dword_8EEC68;
          v15 = *(_DWORD *)(dword_8EEC68 + 4424) - 1;
          if ( v15 >= 0 )
          {
            v16 = 44 * v15;
            while ( 1 )
            {
              v17 = *(void (__cdecl **)(_DWORD, int))(v16 + v14 + 48);
              if ( v17 )
                v17(*(_DWORD *)(v16 + v14 + 24), SHIWORD(wParam) / 120);
              v16 -= 44;
              if ( --v15 < 0 )
                break;
              v14 = dword_8EEC68;
            }
            v5 = Msg;
          }
          v4 = wParam;
          break;
        default:
          break;
      }
    }
    else
    {
      switch ( Msg )
      {
        case 0x201u:
          dword_8EED90 = 1;
          sub_47D450(1);
          if ( (int *)dword_8EEB5C != &dword_8EEE2C )
            sub_47C640(&dword_8EEE2C);
          if ( dword_8EED90 )
          {
            (*(void (**)(void))(dword_8EEC68 + 4464))();
            v13 = GetTickCount();
            if ( (int)(v13 - dword_8F2AA4) <= 500 && dword_8F2AA0 )
            {
              v5 = Msg;
              if ( (int)(abs32(dword_4B81F8 - dword_8EED8C) + abs32(dword_4B81FC - dword_8EED88)) >= 4 )
              {
                dword_8F2AA0 = 0;
              }
              else
              {
                ++dword_8F2AA0;
                dword_8F2AA4 = v13;
              }
            }
            else
            {
              dword_4B81FC = dword_8EED88;
              dword_4B81F8 = dword_8EED8C;
              dword_8F2AA0 = 1;
              dword_8F2AA4 = v13;
            }
          }
          break;
        case 0x101u:
          v12 = dword_8EEC68;
          byte_8EEC70[wParam] = 0;
          (*(void (__cdecl **)(WPARAM))(v12 + 4456))(wParam);
          break;
        case 0x102u:
          if ( dword_8F2AC8 )
          {
            if ( wParam != 13 )
            {
              if ( wParam == 8 )
              {
                if ( *(_BYTE *)(dword_8F2AC8 + 28) )
                {
                  sub_47B930((const char *)(dword_8F2AC8 + 28), 0);
                  v11 = (int *)sub_47F9F0(dword_8F2AC8);
                  sub_47C950(v11);
                }
                goto LABEL_35;
              }
              goto LABEL_31;
            }
            if ( *(_BYTE *)(dword_8F2AC8 + 26) )
            {
LABEL_31:
              v9 = dword_8F2AC8 + 28 + strlen((const char *)(dword_8F2AC8 + 28)) + 1 - (dword_8F2AC8 + 29);
              if ( v9 < 254 )
              {
                if ( v9 < 2 * *(__int16 *)(dword_8F2AC8 + 12) / *(unsigned __int8 *)(dword_8F2AC8 + 24) )
                {
                  *(_BYTE *)(dword_8F2AC8 + v9 + 28) = wParam;
                  *(_BYTE *)(dword_8F2AC8 + v9 + 29) = 0;
                  v10 = (int *)sub_47F9F0(dword_8F2AC8);
                  sub_47C950(v10);
                }
                v5 = Msg;
              }
            }
          }
LABEL_35:
          (*(void (__cdecl **)(WPARAM))(dword_8EEC68 + 4460))(wParam);
          break;
      }
    }
LABEL_58:
    (*(void (__cdecl **)(UINT, WPARAM, LPARAM))(dword_8EEC68 + 4484))(v5, v4, lParam);
    return DefWindowProcA(hWnd, v5, v4, lParam);
  }
  if ( Msg == 256 )
  {
    byte_8EEC70[wParam] = 1;
    if ( wParam == 13 )
      sub_47D450(5);
    (*(void (__cdecl **)(WPARAM))(dword_8EEC68 + 4452))(wParam);
    goto LABEL_58;
  }
  switch ( Msg )
  {
    case 1u:
      if ( dword_8EEDA0 )
        sub_49D640(hWnd);
      goto LABEL_58;
    case 2u:
      if ( dword_8EEDA0 )
        sub_49D610();
      goto LABEL_58;
    case 0xFu:
      if ( dword_8EEDA4 )
      {
        v6 = BeginPaint(hWnd, &Paint);
        sub_4689C0(&dword_8EEDEC, &Paint.rcPaint.left);
        if ( dword_8EEE08 != dword_8EEE00 && dword_8EEE0C != dword_8EEE04 )
        {
          if ( dword_4B81E8 == -1 )
          {
            v7 = (__int16 *)hWnd;
          }
          else
          {
            v7 = (__int16 *)(*(_DWORD *)dword_8EEB5C + 24 * dword_4B81E8);
            sub_469640(dword_8EEDBC, 0, 0, &dword_8EEDEC, dword_8EED88 + *v7, dword_8EED8C + v7[1], v7[2], v7[3]);
            sub_466CA0(v7, &dword_8EEDEC, dword_8EED88, dword_8EED8C);
          }
          if ( *(_BYTE *)(dword_8EEC68 + 1) )
            sub_46D320(v6, 0, 0, hdcSrc, 0, 0, dword_8EEDEC, cy);
          else
            sub_46D2F0(v6, 0, 0, hdcSrc, 0, 0, dword_8EEDEC, cy);
          if ( dword_4B81E8 != -1 )
            sub_469640(&dword_8EEDEC, dword_8EED88 + *v7, dword_8EED8C + v7[1], dword_8EEDBC, 0, 0, v7[2], v7[3]);
        }
        EndPaint(hWnd, &Paint);
        v5 = Msg;
      }
      goto LABEL_58;
    case 0x10u:
      result = 0;
      break;
    default:
      goto LABEL_58;
  }
  return result;
}
