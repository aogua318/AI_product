// 函数 0x42a600  sub_42A600  size=0x1DF  模块=Business_核心
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LRESULT __stdcall sub_42A600(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  HDC v4; // edi
  struct tagPAINTSTRUCT Paint; // [esp+4h] [ebp-354h] BYREF
  struct tagRECT Rect; // [esp+44h] [ebp-314h] BYREF
  WCHAR WideCharStr[256]; // [esp+54h] [ebp-304h] BYREF
  CHAR MultiByteStr[4]; // [esp+254h] [ebp-104h] BYREF
  int v10; // [esp+258h] [ebp-100h]
  int v11; // [esp+25Ch] [ebp-FCh]
  int v12; // [esp+260h] [ebp-F8h]
  int v13; // [esp+264h] [ebp-F4h]
  char v14; // [esp+268h] [ebp-F0h]
  _BYTE v15[235]; // [esp+269h] [ebp-EFh] BYREF

  *(_DWORD *)MultiByteStr = -1088368451;
  v12 = -1138697051;
  v10 = -591519505;
  v11 = 551798048;
  v13 = -1582948142;
  v14 = 0;
  memset(v15, 0, sizeof(v15));
  if ( dword_4D0CA0 )
  {
    MultiByteToWideChar(0x3B6u, 0, MultiByteStr, -1, WideCharStr, 256);
    WideCharToMultiByte(0x3A8u, 0, WideCharStr, -1, MultiByteStr, 256, 0, 0);
  }
  if ( Msg > 0x10 )
  {
    if ( Msg != 273 )
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    switch ( (__int16)wParam )
    {
      case 1:
        dword_4D0DC4 = 0;
        break;
      case 2:
        dword_4D0DC4 = 1;
        break;
      case 3:
        dword_4D0DC4 = 2;
        break;
      case 4:
        dword_4D0DC4 = 3;
        break;
      default:
        break;
    }
    DestroyWindow(hWnd);
  }
  else
  {
    if ( Msg == 16 )
    {
      DestroyWindow(hWnd);
      return 0;
    }
    if ( Msg != 2 )
    {
      if ( Msg == 15 )
      {
        v4 = BeginPaint(hWnd, &Paint);
        GetClientRect(hWnd, &Rect);
        DrawTextA(v4, MultiByteStr, -1, &Rect, 0x21u);
        EndPaint(hWnd, &Paint);
        return 0;
      }
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
  }
  PostQuitMessage(0);
  return 0;
}
