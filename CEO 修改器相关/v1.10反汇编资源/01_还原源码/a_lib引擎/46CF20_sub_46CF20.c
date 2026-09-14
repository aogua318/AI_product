// 函数 0x46cf20  sub_46CF20  size=0xD6  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HWND __cdecl sub_46CF20(
        int X,
        int Y,
        int nWidth,
        int nHeight,
        LRESULT (__stdcall *a5)(HWND, UINT, WPARAM, LPARAM),
        LPCSTR lpClassName,
        DWORD dwStyle,
        HWND hWndParent)
{
  HWND result; // eax
  HWND v9; // esi
  WNDCLASSEXA v10; // [esp+8h] [ebp-30h] BYREF

  hInstance = (HINSTANCE)GetWindowLongA(0, -6);
  v10.cbSize = 48;
  v10.style = 3;
  v10.lpfnWndProc = a5;
  v10.cbClsExtra = 0;
  v10.cbWndExtra = 0;
  v10.hInstance = hInstance;
  v10.hIcon = LoadIconA(0, (LPCSTR)0x7F00);
  v10.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
  v10.hbrBackground = (HBRUSH)GetStockObject(4);
  v10.lpszMenuName = 0;
  v10.lpszClassName = lpClassName;
  v10.hIconSm = LoadIconA(0, (LPCSTR)0x7F00);
  RegisterClassExA(&v10);
  result = CreateWindowExA(0, lpClassName, lpClassName, dwStyle, X, Y, nWidth, nHeight, hWndParent, 0, hInstance, 0);
  v9 = result;
  if ( result )
  {
    ShowWindow(result, 10);
    UpdateWindow(v9);
    return v9;
  }
  return result;
}
