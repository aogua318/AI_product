// 函数 0x46d200  sub_46D200  size=0xB7  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

HDC __cdecl sub_46D200(HWND hWnd, int *a2, int a3, int a4, int a5)
{
  HDC DC; // esi
  HDC CompatibleDC; // edi
  HBITMAP v7; // esi
  void *ppvBits; // [esp+Ch] [ebp-8h] BYREF
  BITMAPINFO *pbmi; // [esp+10h] [ebp-4h] BYREF

  sub_468790((int)&pbmi, a3, a4, a5);
  DC = GetDC(hWnd);
  CompatibleDC = CreateCompatibleDC(DC);
  ReleaseDC(hWnd, DC);
  pbmi->bmiHeader.biHeight = -pbmi->bmiHeader.biHeight;
  v7 = CreateDIBSection(CompatibleDC, pbmi, 0, &ppvBits, 0, 0);
  pbmi->bmiHeader.biHeight = -pbmi->bmiHeader.biHeight;
  sub_465FE0((int)pbmi, "a_lib\\a_wingdi.cpp", 208);
  if ( !v7 )
    return 0;
  SelectObject(CompatibleDC, v7);
  sub_469880(a2, a3, a4, a5, (int)ppvBits);
  return CompatibleDC;
}
