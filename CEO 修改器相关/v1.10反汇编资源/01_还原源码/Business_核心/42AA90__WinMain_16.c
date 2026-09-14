// 函数 0x42aa90  _WinMain@16  size=0x79F  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HANDLE MutexA; // esi
  int UserDefaultLCID; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  unsigned __int8 (__thiscall ***v10)(_DWORD, _DWORD); // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // eax
  const CHAR *v15; // ecx
  HWND Window; // esi
  int v17; // eax
  const CHAR *v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // edi
  _BYTE Src[11408]; // [esp+Ch] [ebp-3908h] BYREF
  WNDCLASSEXA v34; // [esp+2C9Ch] [ebp-C78h] BYREF
  struct tagMSG Msg; // [esp+2CCCh] [ebp-C48h] BYREF
  MSG v36; // [esp+2CE8h] [ebp-C2Ch] BYREF
  int v37; // [esp+2D04h] [ebp-C10h] BYREF
  HANDLE hMutex; // [esp+2D08h] [ebp-C0Ch]
  char *Str; // [esp+2D0Ch] [ebp-C08h] BYREF
  char Buffer[1024]; // [esp+2D10h] [ebp-C04h] BYREF
  char DstBuf[1024]; // [esp+3110h] [ebp-804h] BYREF
  char v42[1024]; // [esp+3510h] [ebp-404h] BYREF

  Str = lpCmdLine;
  MutexA = CreateMutexA(0, 1, "TTIME_CEO");
  hMutex = MutexA;
  if ( GetLastError() == 183 )
  {
    ReleaseMutex(MutexA);
    return 0;
  }
  UserDefaultLCID = (unsigned __int16)GetUserDefaultLCID();
  dword_4D0CA4 = UserDefaultLCID;
  if ( (unsigned __int16)UserDefaultLCID == 2052 || (dword_4D0CA0 = 0, (unsigned __int16)UserDefaultLCID == 4100) )
    dword_4D0CA0 = 1;
  if ( !(unsigned __int8)SteamAPI_RestartAppIfNecessary(2269460) )
  {
    if ( (unsigned __int8)SteamAPI_Init() )
    {
      v7 = (_DWORD *)SteamInternal_ContextInit(&off_4B3110);
      (*(void (__thiscall **)(_DWORD, void (__cdecl *)(int, LPCSTR)))(*(_DWORD *)*v7 + 88))(*v7, sub_42A540);
      v8 = (_DWORD *)SteamInternal_ContextInit(&off_4B311C);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 4))(*v8) )
      {
        if ( !_getcwd(DstBuf, 1024) )
          strcpy(DstBuf, ".");
        _snprintf(Buffer, 0x400u, "%s\\%s", DstBuf, "controller.vdf");
        if ( !sub_42A550(Str, &v37, &Str) )
        {
          memset(v42, 0, sizeof(v42));
          v9 = sub_42A250();
          if ( (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v9 + 104))(v9, v42, 1024) > 0 )
            sub_42A550(v42, &v37, &Str);
        }
        v10 = (unsigned __int8 (__thiscall ***)(_DWORD, _DWORD))sub_42A290();
        if ( (**v10)(v10, 0) )
        {
          v11 = (int *)operator new(0x50u);
          if ( v11 )
            v12 = sub_42A970(v11, (int)&unk_4B11A8, 20);
          else
            v12 = 0;
          dword_4D0DB0 = (int)v12;
          sub_41F7E0();
          dword_4D0DAC = 0;
          dword_4B1130 = 1;
          dword_4D0DC0 = 0;
          memset(&v34, 0, sizeof(v34));
          v34.cbSize = 48;
          v34.lpfnWndProc = sub_42A600;
          v34.hInstance = hInstance;
          v34.lpszClassName = "selectWindowClass";
          RegisterClassExA(&v34);
          v13 = (GetSystemMetrics(0) - 560) / 2;
          v14 = (GetSystemMetrics(1) - 110) / 2;
          v15 = "CEO STEAM";
          if ( !dword_4D0CA0 )
            v15 = (const CHAR *)&unk_4A3310;
          Window = CreateWindowExA(0, "selectWindowClass", v15, 0, v13, v14, 560, 110, 0, 0, hInstance, 0);
          CreateWindowExW(0, L"BUTTON", aWindows, 0x50000000u, 20, 30, 120, 40, Window, (HMENU)1, hInstance, 0);
          CreateWindowExW(0, L"BUTTON", L"1600 x 900", 0x50000000u, 150, 30, 120, 40, Window, (HMENU)2, hInstance, 0);
          CreateWindowExW(0, L"BUTTON", L"1280 x 720", 0x50000000u, 280, 30, 120, 40, Window, (HMENU)3, hInstance, 0);
          CreateWindowExW(0, L"BUTTON", L"800 x 600", 0x50000000u, 410, 30, 120, 40, Window, (HMENU)4, hInstance, 0);
          ShowWindow(Window, nShowCmd);
          UpdateWindow(Window);
          memset(&v36, 0, sizeof(v36));
          while ( GetMessageA(&v36, 0, 0, 0) )
          {
            TranslateMessage(&v36);
            DispatchMessageA(&v36);
          }
          v17 = 0;
          dword_4D0DAC = 0;
          if ( dword_4D0DC4 == 3 )
          {
            v17 = 1;
            dword_4D0DAC = 1;
          }
          v18 = "CEO STEAM";
          if ( !dword_4D0CA0 )
            v18 = (const CHAR *)&unk_4A3310;
          sub_47DFD0((int)v18, 800, 600, 16, v17, v17, v17 != 0 ? 0x80000000 : 281018368, dword_4D0DC4);
          sub_4357C0(-1, 0);
          v19 = sub_47C740("Video\\open.wmv");
          sub_46BF10((int)hInstance, hWnd, 0, 0, 800, 600, v19);
          sub_435860(1);
          v20 = sub_47C740("pics\\cur1");
          sub_4674F0(&unk_4D0DCC, v20, 0, 0);
          v21 = sub_47C740("pics\\32X16");
          sub_4674F0(&unk_4D0DF4, v21, 5260, 0);
          sub_47CFC0(&unk_4D0DCC, &unk_4D0DCC);
          v22 = sub_47C740("fonts\\12ns");
          sub_47CE40(v22, 512);
          v23 = sub_47C740("fonts\\font16");
          sub_47CE40(v23, 512);
          v24 = sub_47C740("fonts\\12ns");
          sub_47CF60(v24, 512);
          sub_41E7E0();
          sub_4354A0();
          sub_435860(1);
          if ( !dword_4D0DB8 )
          {
            while ( 2 )
            {
              sub_41E910((char *)&dword_4CDEA8);
              dword_4CE050 = -1;
              switch ( sub_462C80() )
              {
                case 0:
                  dword_4CDEBC = 0;
                  v25 = sub_45BAE0();
                  if ( v25 == -1 )
                    goto LABEL_58;
                  do
                  {
                    sub_41E910((char *)&dword_4CDEA8);
                    v26 = sub_45CD10(v25);
                    v27 = v26;
                    if ( v26 == 1 )
                    {
                      memcpy(Src, &dword_4CDEA8, sizeof(Src));
                      do
                      {
                        memcpy(&dword_4CDEA8, Src, 0x2C90u);
                        sub_435890(&unk_4D0414);
                        v28 = sub_40BC60(-1);
                      }
                      while ( v28 == 1 );
                    }
                    else
                    {
                      if ( v26 < 10000 )
                        goto LABEL_58;
                      memcpy(Src, &dword_4CDEA8, sizeof(Src));
                      v29 = v27 - 10000;
                      do
                      {
                        memcpy(&dword_4CDEA8, Src, 0x2C90u);
                        v28 = sub_40BC60(v29);
                      }
                      while ( v28 == 1 );
                    }
                  }
                  while ( v28 == 4 || !v28 );
                  goto LABEL_58;
                case 1:
                  dword_4CDEBC = 1;
                  dword_4CDFFC = 1;
                  dword_4CE000 = 1;
                  dword_4CE004 = 1;
                  dword_4CE008 = 0xFFFF;
                  v30 = sub_459B40();
                  if ( v30 )
                  {
                    if ( v30 == 1 )
                    {
                      v31 = 0;
                      v32 = sub_44ADA0();
                      do
                      {
                        if ( v32 >= 0 )
                          v31 = sub_40BC60(v32);
                      }
                      while ( v31 == 1 );
                    }
                  }
                  else if ( sub_4599F0() )
                  {
                    memcpy(Src, &dword_4CDEA8, sizeof(Src));
                    do
                      memcpy(&dword_4CDEA8, Src, 0x2C90u);
                    while ( sub_40BC60(-1) == 1 );
                  }
                  goto LABEL_58;
                case 2:
                  sub_42A4E0();
                  goto LABEL_58;
                case 3:
                  dword_4D0DB8 = 1;
                  break;
                default:
LABEL_58:
                  if ( dword_4D0DB8 )
                    break;
                  continue;
              }
              break;
            }
          }
          sub_4354F0();
          sub_41E8B0();
          sub_4676A0(&dword_4D0DE4);
          sub_466C70(&unk_4D0DF4);
          sub_466C70(&unk_4D0DCC);
          sub_47C7A0();
          ReleaseMutex(hMutex);
          return 0;
        }
        OutputDebugStringA("SteamInput()->Init failed.\n");
        sub_42A520("Fatal Error", "SteamInput()->Init failed.\n");
      }
      else
      {
        OutputDebugStringA("Steam user is not logged in\n");
        sub_42A520(
          "Fatal Error",
          "Steam user must be logged in to play this game (SteamUser()->BLoggedOn() returned false).\n");
      }
    }
    else
    {
      OutputDebugStringA("SteamAPI_Init() failed\n");
      sub_42A520("Fatal Error", "Steam must be running to play this game (SteamAPI_Init() failed).\n");
    }
    return 1;
  }
  if ( PeekMessageA(&Msg, 0, 0, 0, 1u) )
  {
    TranslateMessage(&Msg);
    DispatchMessageA(&Msg);
  }
  return Msg.wParam;
}
