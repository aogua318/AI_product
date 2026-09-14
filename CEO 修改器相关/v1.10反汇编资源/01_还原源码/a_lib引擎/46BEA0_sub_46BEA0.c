// 函数 0x46bea0  sub_46BEA0  size=0x62  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

LRESULT __stdcall sub_46BEA0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  struct tagPAINTSTRUCT Paint; // [esp+8h] [ebp-44h] BYREF

  if ( Msg == 15 )
  {
    BeginPaint(hWnd, &Paint);
    InvalidateRect(hWnd, &Paint.rcPaint, 0);
    EndPaint(hWnd, &Paint);
  }
  return DefWindowProcA(hWnd, Msg, wParam, lParam);
}
