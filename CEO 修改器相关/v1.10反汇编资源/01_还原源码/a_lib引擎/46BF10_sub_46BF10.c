// 函数 0x46bf10  sub_46BF10  size=0x1A3  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_46BF10(int a1, HWND hWnd, int a3, int a4, int a5, int a6, const CHAR *a7)
{
  int v7; // eax
  int v8; // esi
  DWORD TickCount; // ebx
  DWORD v10; // esi
  int v11; // esi
  struct tagMSG Msg; // [esp+8h] [ebp-138h] BYREF
  _DWORD v14[2]; // [esp+24h] [ebp-11Ch] BYREF
  _DWORD v15[2]; // [esp+2Ch] [ebp-114h] BYREF
  int v16; // [esp+34h] [ebp-10Ch]
  LONG dwNewLong; // [esp+38h] [ebp-108h]
  CHAR Text[256]; // [esp+3Ch] [ebp-104h] BYREF

  dwNewLong = SetWindowLongA(hWnd, -4, (LONG)sub_46BEA0);
  CoInitialize(0);
  dword_8DBCD0 = (int)hWnd;
  v7 = sub_46BD20(a7, a3, a4, a5, a6);
  v8 = v7;
  v16 = v7;
  if ( v7 )
  {
    sprintf(Text, "Play movie error:%x\r\nThe most common cause is not connected to the headset.", v7);
    MessageBoxA(0, Text, byte_4A2869, 0);
  }
  else
  {
    ShowCursor(0);
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)dword_8DBCE0 + 44))(dword_8DBCE0, v14);
    TickCount = GetTickCount();
    do
    {
      v10 = GetTickCount();
      if ( (int)(v10 - TickCount) > 500 )
      {
        InvalidateRect(hWnd, 0, 0);
        TickCount = v10;
      }
      v11 = 0;
      if ( PeekMessageA(&Msg, 0, 0, 0, 1u) )
      {
        if ( Msg.message == 256 || Msg.message == 513 )
        {
          v11 = 1;
        }
        else
        {
          TranslateMessage(&Msg);
          DispatchMessageA(&Msg);
        }
      }
      (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)dword_8DBCE0 + 48))(dword_8DBCE0, v15);
    }
    while ( !v11 && (v15[0] != v14[0] || v15[1] != v14[1]) );
    ShowCursor(1);
    v8 = v16;
  }
  sub_46BE40();
  CoUninitialize();
  SetWindowLongA(hWnd, -4, dwNewLong);
  return v8;
}
