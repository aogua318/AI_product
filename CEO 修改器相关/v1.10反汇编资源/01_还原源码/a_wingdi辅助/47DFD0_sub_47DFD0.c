// 函数 0x47dfd0  sub_47DFD0  size=0x21D  模块=a_wingdi辅助
// 还原方式: Hex-Rays 反编译(伪 C 源码)

int __cdecl sub_47DFD0(const CHAR *a1, int nWidth, int nHeight, int a4, int a5, int a6, DWORD dwStyle, int a8)
{
  int v8; // esi
  DWORD v9; // eax
  int v10; // ecx
  int v12; // esi
  int v13; // edi
  HWND DesktopWindow; // eax
  struct tagRECT Rect; // [esp+18h] [ebp-14h] BYREF

  v8 = nHeight;
  GetCurrentDirectoryA(0x104u, Buffer);
  sub_464100(Buffer);
  if ( *((_BYTE *)&dword_8EEB5C + strlen(Buffer) + 3) != 92 )
    *(_WORD *)&Buffer[strlen(Buffer)] = 92;
  sub_47C490(dword_8F11C0);
  dword_8EEC6C = a4;
  v9 = dwStyle;
  dword_8EEC68 = v10;
  dword_8EEDA0 = a6;
  dword_8EED74 = nWidth;
  dword_8EEB58 = nHeight;
  if ( !dwStyle && (a5 || a6) )
    v9 = 0x80000000;
  hWnd = sub_46CF20(0, 0, nWidth, nHeight, sub_47D620, a1, v9, 0);
  dword_8EED7C = (int)hWnd;
  if ( a8 <= 0 )
    goto LABEL_17;
  if ( a8 != 3 )
  {
    if ( a8 == 2 )
    {
      sub_46D080(0x500u, 0x2D0u, 0x10u);
LABEL_14:
      Sleep(0x7D0u);
      goto LABEL_18;
    }
    if ( a8 == 1 )
    {
      sub_46D080(0x640u, 0x384u, 0x10u);
      goto LABEL_14;
    }
LABEL_17:
    if ( a8 >= 3 )
      goto LABEL_10;
LABEL_18:
    sub_46D000(hWnd, nWidth, nHeight);
    GetWindowRect(hWnd, &Rect);
    v12 = Rect.right - Rect.left;
    v13 = Rect.bottom - Rect.top;
    DesktopWindow = GetDesktopWindow();
    GetWindowRect(DesktopWindow, &Rect);
    MoveWindow(hWnd, (Rect.right - v12) / 2, (Rect.bottom - v13) / 2, v12, v13, 1);
    v8 = nHeight;
    goto LABEL_11;
  }
  sub_46D080(0x320u, 0x258u, 0x10u);
  Sleep(0x7D0u);
LABEL_10:
  MoveWindow(hWnd, 0, 0, nWidth, nHeight, 1);
LABEL_11:
  hdcSrc = sub_46D200(hWnd, &dword_8EEDEC, nWidth, v8, a4);
  memset(byte_8EEC70, 0, 0x100u);
  dword_8EEDA4 = 1;
  return 1;
}
