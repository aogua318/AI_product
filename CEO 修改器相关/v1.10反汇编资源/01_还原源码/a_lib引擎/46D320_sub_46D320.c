// 函数 0x46d320  sub_46D320  size=0xA3  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

void __cdecl sub_46D320(HDC hdc, int x, int y, HDC hdcSrc, int x1, int a6, int a7, int a8)
{
  int v8; // edi
  int v9; // esi
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // esi
  unsigned int v14; // edi

  v8 = a8;
  if ( a8 > 0 )
  {
    v9 = y;
    v10 = a6 - y;
    v11 = ((unsigned int)(a8 - 1) >> 1) + 1;
    while ( 1 )
    {
      BitBlt(hdc, x, v9, a7, 1, hdcSrc, x1, v9 + v10, 0xCC0020u);
      v9 += 2;
      if ( !--v11 )
        break;
      v10 = a6 - y;
    }
    v8 = a8;
  }
  if ( v8 > 1 )
  {
    v12 = a6 - y;
    v13 = y + 1;
    v14 = ((unsigned int)(v8 - 2) >> 1) + 1;
    while ( 1 )
    {
      BitBlt(hdc, x, v13, a7, 1, hdcSrc, x1, v13 + v12, 0xCC0020u);
      v13 += 2;
      if ( !--v14 )
        break;
      v12 = a6 - y;
    }
  }
}
