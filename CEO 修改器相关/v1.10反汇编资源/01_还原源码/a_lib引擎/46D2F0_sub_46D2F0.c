// 函数 0x46d2f0  sub_46D2F0  size=0x30  模块=a_lib引擎
// 还原方式: Hex-Rays 反编译(伪 C 源码)

BOOL __cdecl sub_46D2F0(HDC hdc, int x, int y, HDC hdcSrc, int x1, int y1, int a7, int cy)
{
  return BitBlt(hdc, x, y, a7, cy, hdcSrc, x1, y1, 0xCC0020u);
}
