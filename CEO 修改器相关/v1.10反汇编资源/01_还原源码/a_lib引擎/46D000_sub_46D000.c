// 函数 0x46d000  sub_46D000  size=0x7F  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_46D000(HWND hWnd, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  struct tagPOINT Point; // [esp+Ch] [ebp-2Ch] BYREF
  struct tagRECT v7; // [esp+14h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+24h] [ebp-14h] BYREF

  GetWindowRect(hWnd, &Rect);
  GetClientRect(hWnd, &v7);
  v3 = Rect.bottom - v7.bottom - Rect.top + a3;
  v4 = Rect.right - v7.right - Rect.left + a2;
  Point.x = 0;
  Point.y = 0;
  ClientToScreen(hWnd, &Point);
  return MoveWindow(hWnd, Point.x, Point.y, v4, v3, 1);
}
